// Copyright Epic Games, Inc. All Rights Reserved.

// UELibraryApp.cpp : Defines the entry point for the application.
//

#include "UELibraryApp.h"

// #include "LiveDirectorBPLibrary.h"
#include "resource.h"
// C RunTime Header Files
#include <malloc.h>
#include <memory.h>
#include <tchar.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdint.h>
#include <wchar.h>
#include <iostream>
#define UELIBRARY_DLL_EXPORT
#include "UELibraryAPI.h"
#undef UELIBRARY_DLL_EXPORT


#include "Parse.h"
#include "win_frametimer.hpp"
// Array size helper
template <typename T, size_t N>
constexpr size_t ArraySize(T(&)[N])
{
	return N;
}

#define TIMER_ID 123

#define OutputDebugStringVar(fmt, ...) { wchar_t Temp[256]; swprintf(Temp, ArraySize(Temp), fmt, ##__VA_ARGS__); OutputDebugString(Temp); MessageBoxW(NULL, L"Error", L"Title", MB_OK); }

//
//  FUNCTION: WndProc(HWND, UINT, WPARAM, LPARAM)
//
//  PURPOSE: Processes messages for the main window.
//
//  WM_COMMAND  - process the application menu
//  WM_PAINT    - Paint the main window
//  WM_DESTROY  - post a quit message and return
//
//
LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    switch (message)
    {
		case WM_CLOSE:
		{
			DestroyWindow(hWnd);
			return 0;
		}

		case WM_COMMAND:
		{
			return DefWindowProc(hWnd, message, wParam, lParam);
		}

		case WM_PAINT:
		{
			PAINTSTRUCT ps;
			HDC hdc = BeginPaint(hWnd, &ps);
			EndPaint(hWnd, &ps);
			return 0;
		}

		case WM_DESTROY:
		{
			PostQuitMessage(0);
			return 0;
		}

		case WM_SIZE:
		case WM_SETFOCUS:
		case WM_KILLFOCUS:
		case WM_SHOWWINDOW:
		case WM_MOVE:
		case WM_SETCURSOR:
		case WM_MOUSEACTIVATE:
		case WM_MBUTTONDBLCLK:
		case WM_MBUTTONDOWN:
		case WM_MBUTTONUP:
		case WM_RBUTTONDBLCLK:
		case WM_RBUTTONDOWN:
		case WM_KEYDOWN:
		case WM_MOUSEMOVE:
		case WM_INPUT:
		case WM_CHAR:
		case WM_LBUTTONDBLCLK:
		case WM_LBUTTONDOWN:
		case WM_LBUTTONUP:
		case WM_RBUTTONUP:
		case WM_KEYUP:
		{
			#if defined(UE_LIBRARY_ENABLED) && UE_LIBRARY_ENABLED
				return UELibrary_WndProc(hWnd, message, wParam, lParam);
			#else
				return DefWindowProc(hWnd, message, wParam, lParam);
			#endif
		}
		break;

		default:
		{
			return DefWindowProc(hWnd, message, wParam, lParam);
		}
    }
}

ATOM wndClass;       // registered window class
// Forward declarations of functions included in this code module:
ATOM FilmMakerRegisterClass(HINSTANCE hInst);

BOOL WINAPI DllMain(
    HINSTANCE hinstDLL,  // handle to DLL module
    DWORD fdwReason,     // reason for calling function
    LPVOID lpvReserved )  // reserved
{
	BOOL res = true;
    // Perform actions based on the reason for calling.
    switch( fdwReason ) 
    { 
		case DLL_PROCESS_ATTACH:
			// Initialize once for each new process.
			// Return FALSE to fail DLL load.
			{
				ATOM result = FilmMakerRegisterClass(hinstDLL);
				if (result == 0) {
					DWORD err = GetLastError();
					if (err == ERROR_CLASS_ALREADY_EXISTS) {
						// Class already registered in this process
					}
					else {
						// Some other error
						DWORD dw = GetLastError();
						OutputDebugStringVar(L"Failed to register window class (error: %llu)", (unsigned long long)dw);
						res = false;
					}
				}
				else {
					// Success
					wndClass = result;
				}
			}
            break;

		case DLL_THREAD_ATTACH:
         // Do thread-specific initialization.
            break;

        case DLL_THREAD_DETACH:
         // Do thread-specific cleanup.
            break;

        case DLL_PROCESS_DETACH:
        
            if (lpvReserved != nullptr)
            {
                break; // do not do cleanup if process termination scenario
            }
            
            // Perform any necessary cleanup.
			res = UnregisterClassW(L"54f62ee2-38a6-4c5d-a7c6-d9565dfd4363", hinstDLL);
            break;
    }
    return res;  // Successful DLL_PROCESS_ATTACH.
}

//
//  FUNCTION: FilmMakerRegisterClass()
//
//  PURPOSE: Registers the window class.
//
ATOM FilmMakerRegisterClass(HINSTANCE hInst)
{
	std::cerr << "FilmMakerRegisterClass with " << (hInst ? "non-null" : "null") << " hInst" << std::endl;
    // Register window class
	WNDCLASSEXW wcex;
	ZeroMemory(&wcex, sizeof(wcex));

    wcex.cbSize 		= sizeof(WNDCLASSEX);
    wcex.style          = CS_HREDRAW | CS_VREDRAW | CS_NOCLOSE | CS_GLOBALCLASS; 
    wcex.lpfnWndProc    = WndProc;
    wcex.cbClsExtra     = 0;
    wcex.cbWndExtra     = 0;
    wcex.hInstance      = hInst;
    wcex.hIcon          = NULL;
    wcex.hCursor        = LoadCursor(nullptr, IDC_ARROW);
    wcex.hbrBackground  = (HBRUSH)(COLOR_WINDOW+1);
    wcex.lpszMenuName   = NULL;
    wcex.lpszClassName  = L"54f62ee2-38a6-4c5d-a7c6-d9565dfd4363";
    wcex.hIconSm        = NULL;

    return RegisterClassExW(&wcex);
}

FilmMaker_EXPORT int AppMain(HINSTANCE hInst, HWND hWndParent, const char* CmdLine){
	// Perform application initialization:
	// Initialize
	ATOM result = FilmMakerRegisterClass(hInst);
	if (result == 0) {
		DWORD err = GetLastError();
		if (err == ERROR_CLASS_ALREADY_EXISTS) {
			// Class already registered in this process
		}
		else {
			// Some other error
			DWORD dw = GetLastError();
			OutputDebugStringVar(L"Failed to register window class (error: %llu)", (unsigned long long)dw);
			return (int)dw;
		}
	} else {
		// Success
		wndClass = result;
	}

	// Create  and display the main program window
	DWORD extendedStyle = hWndParent == NULL  ? WS_EX_APPWINDOW | WS_EX_WINDOWEDGE : WS_EX_CLIENTEDGE;
	DWORD windowsStyle = hWndParent == NULL  ? WS_OVERLAPPEDWINDOW : WS_CHILDWINDOW | WS_VISIBLE;
    HWND hWnd = CreateWindowExW(
			extendedStyle,
            L"FilmMaker",
            NULL,
            windowsStyle,
            CW_USEDEFAULT,
            CW_USEDEFAULT,
            CW_USEDEFAULT,
            CW_USEDEFAULT,
            hWndParent,
            nullptr,
            hInst,
            nullptr
        );
		
	if (!hWnd)
    {
		DWORD dw = GetLastError(); 
        OutputDebugStringVar(L"Failed to create main window (error: %llu)", (unsigned long long)dw);
        return (int) dw;
    }
	
	ShowWindow(hWnd, SW_SHOWNA);
    UpdateWindow(hWnd);
    SetCapture(hWnd);

	
	size_t size = strlen(CmdLine) + 1;
	wchar_t* lpCmdLine = new wchar_t[size];

	size_t outSize;
	mbstowcs_s(&outSize, lpCmdLine, size, CmdLine, size-1);
	std::wstring CmdLineCopy = lpCmdLine;
	
	delete []lpCmdLine;

	std::wstring MapToUse;
	if (!ExtractValueFromCommandLine((wchar_t*)CmdLineCopy.c_str(), L"-OverrideMap", MapToUse))
	{
		MapToUse = L"/Game/Maps/Showcase";
	}
	
	std::wstring UEProjectPath;
	if (!ExtractValueFromCommandLine((wchar_t*)CmdLineCopy.c_str(), L"-UEProjectPath", UEProjectPath))
	{
		UEProjectPath = L"FilmMaker.uproject";
	}
	
	unsigned int fps;
	if (!ExtractValueFromCommandLine((wchar_t*)CmdLineCopy.c_str(), L"-TargetFPS", fps))
	{
		fps = 5;
	}	

	// Initialize UE Library
	wchar_t commandLine[2048];
	swprintf(commandLine, ArraySize(commandLine), L"%s %s %s", UEProjectPath.c_str(), MapToUse.c_str(), CmdLineCopy.c_str());
#if defined(UE_LIBRARY_ENABLED) && UE_LIBRARY_ENABLED
	if (int Error = UELibrary_Init(hInst, hWnd, commandLine))
	{
		OutputDebugStringVar(L"Failed to initialize UE Library (error: %d)\n", Error);
		return Error;
	}
#endif
	unsigned int ShutdownTime  = 0;
	if (ExtractValueFromCommandLine(commandLine, L"-AutoCloseInMS", ShutdownTime))
	{
		SetTimer(hWnd, TIMER_ID, ShutdownTime, NULL);
	}
	
	// frametimer_t* frametimer = frametimer_create( NULL );
	// frametimer_lock_rate( frametimer, fps );
	WinFrameTimer timer(fps);
	// Message loop
	for (;;)
	{
		double dt = timer.update();
		bool bQuit = false;

		MSG Msg;
		while (PeekMessage(&Msg, NULL, 0, 0, PM_REMOVE))
		{
			bQuit = bQuit || Msg.message == WM_QUIT;

			TranslateMessage(&Msg);
			DispatchMessage(&Msg);
		}

		if (bQuit)
		{
			break;
		}
		// float dt = frametimer_update( frametimer );
		timer.wait(); // Cap framerate
#if defined(UE_LIBRARY_ENABLED) && UE_LIBRARY_ENABLED
		if ((int TickResult = UELibrary_Tick()) != 0)
		{
			OutputDebugStringVar(L"Failed to tick UE Library, dt=%fs (error: %d)\n", dt, TickResult);
			break;
		}
#endif
	}
	// frametimer_destroy(frametimer);
	int ShutdownResult = 0;
#if defined(UE_LIBRARY_ENABLED) && UE_LIBRARY_ENABLED
	ShutdownResult = UELibrary_Shutdown();
	if (ShutdownResult != 0)
	{
		OutputDebugStringVar(L"Failed to shutdown UE Library (error: %d)\n", ShutdownResult);
	}
#endif
	return ShutdownResult;
}


void RenderMovieScenes(const char* outputdirectory, int fps, int xres, int yres)
{
	FString OutputDirectory(outputdirectory);
	FIntPoint Resolution(xres, yres);
	FFrameRate GlobalFrameRate(fps, 1);
	//ULiveDirectorBPLibrary::RenderMovieSceneQueue(OutputDirectory, Resolution, GlobalFrameRate);
}



