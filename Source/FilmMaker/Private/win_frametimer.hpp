#ifndef WIN_FRAMETIMER_H
#define WIN_FRAMETIMER_H

#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <windows.h>
#include <timeapi.h> // Required for timeBeginPeriod

#pragma comment(lib, "winmm.lib") // Link multimedia timer library




// EXample code
// #include "win_frametimer.h"
// #include <iostream>
// int main() {
    // WinFrameTimer timer(60.0); // Target 60 FPS

    // while (true) {
        // double dt = timer.update(); // Get delta time
        
 ///       ... Game/App Logic Here ...
        
        // timer.wait(); // Cap framerate
    // }
    // return 0;
// }


class WinFrameTimer {
public:
    WinFrameTimer(double target_fps = 60.0) {
        // Set system timer resolution to 1ms for more accurate Sleep()
        timeBeginPeriod(1);
        
        QueryPerformanceFrequency(&frequency);
        set_target_fps(target_fps);
        reset();
    }

    ~WinFrameTimer() {
        timeEndPeriod(1); // Restore system timer resolution
    }

    void reset() {
        QueryPerformanceCounter(&last_time);
    }

    // Updates the timer and returns delta time in seconds
    double update() {
        LARGE_INTEGER current_time;
        QueryPerformanceCounter(&current_time);
        
        double delta = (double)(current_time.QuadPart - last_time.QuadPart) / frequency.QuadPart;
        last_time = current_time;
        return delta;
    }

    // Limits framerate by sleeping and then busy-waiting for precision
    void wait() {
        if (target_interval <= 0.0) return;

        LARGE_INTEGER current_time;
        QueryPerformanceCounter(&current_time);
        double elapsed = (double)(current_time.QuadPart - last_time.QuadPart) / frequency.QuadPart;

        while (elapsed < target_interval) {
            double remaining = target_interval - elapsed;
            
            // If more than 1.5ms left, give up time slice to OS
            if (remaining > 0.0015) {
                Sleep(1);
            }
            
            QueryPerformanceCounter(&current_time);
            elapsed = (double)(current_time.QuadPart - last_time.QuadPart) / frequency.QuadPart;
        }
        
        last_time = current_time;
    }

    void set_target_fps(double fps) {
        target_interval = (fps > 0.0) ? (1.0 / fps) : 0.0;
    }

private:
    LARGE_INTEGER frequency;
    LARGE_INTEGER last_time;
    double target_interval;
};

#endif // WIN_FRAMETIMER_H
