# Unnu FilmMaker  
### An Unreal Editor Project Featuring the Unnu FilmMaker SDK Production Pipeline

**Unnu FilmMaker** is a built around the **Unreal Editor (UnrealEd)** and  **Unnu FilmMaker (unnufm)** SDK. It provides a clean foundation for building cinematic tools, real‑time visualization systems, and custom media pipelines. The engine focuses on clarity, portability, and extensibility—making it ideal for developers who want a minimal but production‑oriented framework for film, animation, and interactive storytelling.

---

## 🎬 Purpose

Unnu FilmMaker demonstrates how to integrate the **Unnu FilmMaker SDK** into a full production pipeline, including:

- Scene and shot orchestration  
- Asset and timeline management  
- Frame rendering and output  
- Extensible modules for custom cinematic workflows  

It serves both as a **reference implementation** and a **starter engine** for teams building film‑centric applications.

---

## 🧩 Key Features

- **FilmMaker SDK Integration**  
  Native integration with `unnufm` for shot sequencing, film logic, and production‑ready data structures.

- **Modular Engine Architecture**  
  Clean separation of core systems, rendering, film pipeline, and utilities.

- **CMake‑Driven Build System**  
  Cross‑platform builds with minimal dependencies.

- **Lightweight Runtime**  
  Designed to embed into tools, editors, or standalone cinematic applications.

- **Production Pipeline Ready**  
  Includes a reference implementation of a film pipeline: scenes → shots → frames → output.

---
## 🎥 Film Production Pipeline

Unnu Engine implements a streamlined cinematic pipeline using the FilmMaker SDK:

1. **Project Initialization**  
   Load film metadata, configure runtime, initialize FilmMaker modules.

2. **Scene Loading**  
   Parse scene definitions, assets, and timeline data.

3. **Shot Sequencing**  
   Use FilmMaker’s shot graph to orchestrate transitions and camera logic.

4. **Frame Rendering**  
   Render each frame using the engine’s rendering backend.

5. **Output Generation**  
   Export frames or sequences for editing, review, or final delivery.

This pipeline is intentionally minimal so developers can extend it with:

- Custom renderers  
- AI‑assisted shot generation  
- Procedural scene assembly  
- Editor UI integrations  
- Real‑time playback tools  

---

## 🔌 Integrating the FilmMaker SDK

The project includes the FilmMaker SDK as a third‑party module:

- Headers located in `third_party/unnufm/include/unnu_fm`
- Source located in `third_party/unnufm/src`
