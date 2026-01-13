# 4S Codebase Summary

## Overview
This is a comprehensive summary of the 4Story (4S) game codebase, focusing on the **TClient/Tools** directory and **TClient/TEngine/Engine Lib** components. The codebase appears to be an MMORPG game engine and associated tools written primarily in C++ using Microsoft Foundation Classes (MFC) and DirectX 9.

---

## Project Structure

The repository is organized into several major components:
- **TClient** - Client-side game application and tools
- **TServer** - Server-side components
- **TSimulation** - Simulation systems
- **TProtocol** - Network protocol definitions
- Additional libraries: Apex, HShield, NPGame, XTrap (anti-cheat/protection systems)

---

## TClient/Tools Directory

The Tools directory contains **21 development and utility applications** for game content creation, debugging, and asset management. These are MFC-based Windows applications that provide GUI interfaces for various game development tasks.

### Tool Categories and Descriptions

#### **Asset Creation & Conversion Tools**

1. **TBuilder**
   - **Purpose**: Primary asset building and management tool
   - **Key Files**: TBuilder.cpp, TBuilderDlg.cpp (103KB), ItemBase.cpp (85KB)
   - **Features**: Item base management, asset compilation
   - **Size**: ~284KB total

2. **TMFConvertor** (Mesh Format Converter)
   - **Purpose**: Converts mesh file formats
   - **Key Files**: TMFConvertor.cpp, TMFConvertorDlg.cpp, TMeshTemp.cpp
   - **Size**: ~84KB total

3. **TIDHBuilder** (IDH Builder)
   - **Purpose**: Builds IDH (likely Index/Data Header) files
   - **Key Files**: TIDHBuilderDlg.cpp
   - **Size**: ~84KB total

4. **TMHBuilder** (Map Header Builder)
   - **Purpose**: Builds map header files
   - **Key Files**: TMHBuilderMAP.cpp, TMHBuilderOBJ.cpp
   - **Features**: Map and object processing
   - **Size**: ~104KB total

5. **CONVERTFASTTMO** (TMO Converter)
   - **Purpose**: Converts/shrinks TMO (Tachyon Map Object) files
   - **Key Files**: ShrinkTMO.cpp, ShrinkTMODlg.cpp
   - **Features**: Map optimization, includes MapIndex.txt
   - **Size**: ~76KB total

#### **Viewing & Inspection Tools**

6. **TExplorer**
   - **Purpose**: Game world explorer and debugging tool
   - **Key Files**: TExplorerGame.cpp (64KB), TExplorerMAP.cpp (49KB), TExplorerObjBase.cpp (59KB)
   - **Features**: 
     - Character viewing (TExplorerChar.cpp)
     - BSP map viewing (TExplorerBSP.cpp)
     - Flag management (TExplorerFlag.cpp)
     - GM (Game Master) functions (TExplorerGM.cpp)
     - Inventory, items, NPCs, SFX viewing
     - Minimap and worldmap integration
   - **Size**: ~480KB total (largest tool)

7. **TMapViewer**
   - **Purpose**: Specialized map viewing and editing tool
   - **Key Files**: TMapViewerGame.cpp (64KB), TMapViewerMAP.cpp (42KB), TMapViewerObjBase.cpp (57KB)
   - **Features**: Similar to TExplorer but focused on maps
   - **Includes**: vcxproj files (Visual Studio 2010+ project)
   - **Size**: ~472KB total

8. **TFontViewer**
   - **Purpose**: Font testing and preview tool
   - **Key Files**: TFontViewerType.h (25KB), TFontDialogView.cpp, TFontTestView.cpp
   - **Features**: Font list management (fontlist.txt)
   - **Size**: ~148KB total

9. **TMeshRegulator**
   - **Purpose**: Mesh adjustment and regulation tool
   - **Key Files**: TMeshRegulatorDlg.cpp
   - **Size**: ~72KB total

#### **Quest & Game Content Tools**

10. **TQuestEditor**
    - **Purpose**: Quest design and editing tool
    - **Key Files**: TQuestEditorDoc.cpp (34KB), TQuestView.cpp (54KB)
    - **Features**: 
      - Quest condition sets (TConditionSet.cpp)
      - Quest rewards (TRewardSet.cpp)
      - Quest terms (TTermSet.cpp, TTermTextSet.cpp)
      - Monster chart integration (TMonsterChartSet.cpp)
      - Class-based quest management (TQClassSet.cpp)
    - **Size**: ~348KB total

11. **TQuestPath**
    - **Purpose**: Quest pathing and position management
    - **Key Files**: TQuestPathDoc.cpp (53KB), TMapView.cpp (29KB)
    - **Features**: 
      - Database integration (TGameDB.cpp, TQuestDB.cpp)
      - Position management (TPathWndPOS.cpp, TPathWndMAIN.cpp)
      - Monster/NPC positioning (TPathWndMON.cpp, TPathWndNPC.cpp)
      - Import/export functionality (TExportDlg.cpp, TImportDlg.cpp)
    - **Size**: ~444KB total

12. **TMonSpawnInspector**
    - **Purpose**: Monster spawn point inspection and management
    - **Key Files**: TMonSpawnInspectorObjBase.cpp (32KB), TMonSpawnInspectorRes.cpp (24KB)
    - **Features**: HUGEMAP support, map integration
    - **Size**: ~208KB total

#### **Configuration & Data Management Tools**

13. **TChartProtect**
    - **Purpose**: Chart data protection/encryption tool
    - **Key Files**: TChartProtectDlg.cpp (95KB - very large)
    - **Size**: ~156KB total

14. **TCMLParser** (TCML = Tachyon Content Markup Language)
    - **Purpose**: Parses TCML markup files
    - **Key Files**: TCMLParserDlg.cpp
    - **Size**: ~68KB total

15. **TConfigMP**
    - **Purpose**: Multi-platform configuration management
    - **Key Files**: TConfigMPDlg.cpp
    - **Size**: ~68KB total

16. **TTranslator**
    - **Purpose**: Translation and localization tool
    - **Key Files**: TTranslatorDlg.cpp (113KB - very large)
    - **Features**: Progress dialog support (TProgressDlg.cpp)
    - **Size**: ~208KB total

#### **Path & Animation Tools**

17. **TPathMerge**
    - **Purpose**: Merges path data
    - **Key Files**: TPathMergeDlg.cpp, PathFlag.cpp
    - **Size**: ~76KB total

18. **TPathTime**
    - **Purpose**: Path timing and animation tool
    - **Key Files**: TPathTimeDoc.cpp, TPathTimeView.cpp
    - **Features**: 
      - Joint editing (EditJointDlg.cpp)
      - Unit management (UnitDlg.cpp)
      - Snap functionality (SnapDlg.cpp)
    - **Size**: ~184KB total

#### **Resource & Data Tools**

19. **TRCImporter** (Resource Importer)
    - **Purpose**: Imports resource data
    - **Key Files**: TRCImporterDlg.cpp
    - **Size**: ~64KB total

#### **Launcher Applications**

20. **AppLauncher**
    - **Purpose**: Generic application launcher
    - **Key Files**: AppLauncher.cpp (minimal - 517 bytes)
    - **Size**: ~32KB total

21. **ClientLauncher**
    - **Purpose**: Game client launcher with UI
    - **Key Files**: ClientLauncherDlg.cpp
    - **Size**: ~68KB total

### Common Tool Patterns

All tools follow similar MFC patterns:
- **StdAfx.h/cpp**: Precompiled header files
- **Resource.h**: Resource definitions
- **[ToolName].rc**: Resource scripts (dialogs, menus, icons)
- **[ToolName]Dlg.cpp/.h**: Main dialog implementation
- **res/**: Resource directory (icons, bitmaps)
- **ReadMe.txt**: Documentation (mostly in Korean)

---

## TClient/TEngine/Engine Lib

The Engine Lib is a **static MFC library** containing the core 3D game engine built on DirectX 9. It provides the foundational graphics, audio, and game object systems.

### Architecture Overview

**Total Code**: ~42,710 lines of C++ code across 238 header files and 218 implementation files

### Core Components

#### **1. Graphics & Rendering System (D3D Prefix)**

**D3DDevice** (Primary Graphics Device)
- **Files**: D3DDevice.cpp, D3DDevice.h (206 lines)
- **Purpose**: DirectX 9 device management and initialization
- **Key Features**:
  - Device creation and reset handling
  - Vertex/Pixel shader management (VS_COUNT, PS_COUNT types)
  - Multi-threaded rendering support (CRITICAL_SECTION m_cs)
  - Glow effects (BeginGLOWScene, EndGLOWScene)
  - Texture detail levels (LOW/MED/HI)
  - Hardware capability detection (D3DCAPS9)
  - Memory management (video/system RAM tracking)
  
**Shader System**:
- Vertex Shader Types: WMESHVERTEX, MESHVERTEX, LVERTEX
- Pixel Shader Types: 23 different blend modes including:
  - MODULATE, ADD, SUBTRACT, LERP
  - DOTPRODUCT3, DETAILMAP, SHADER
  - Various alpha blending modes
  
**Game Options** (GAMEOPTION struct):
- Screen resolution (default: 1024x768)
- Windowed/Fullscreen mode
- VSync settings (presentation interval)
- Hardware shader enable/disable
- Texture detail levels

**D3DCamera**
- **Files**: D3DCamera.cpp, D3DCamera.h
- **Purpose**: 3D camera management
- Projection and view matrix management

**D3DFont**
- **Files**: D3DFont.cpp, D3DFont.h
- **Purpose**: Text rendering system
- DirectX-based font drawing

**D3DImage**
- **Files**: D3DImage.cpp, D3DImage.h
- **Purpose**: 2D image rendering
- Sprite and UI element rendering

**D3DLight**
- **Files**: D3DLight.cpp, D3DLight.h
- **Purpose**: Dynamic lighting system
- Multiple light source management

**D3DSound**
- **Files**: D3DSound.cpp, D3DSound.h
- **Purpose**: 3D positional audio system
- DirectSound integration

**D3DSphere**
- **Files**: D3DSphere.h
- **Purpose**: Sphere rendering (collision bounds, effects)

#### **2. Tachyon Engine Core (Tachyon Prefix)**

**TachyonApp** (Main Application Framework)
- **Files**: TachyonApp.cpp, TachyonApp.h (47 lines)
- **Purpose**: Application lifecycle management
- **Key Features**:
  - Inherits from CWinApp (MFC)
  - Message pump override (Run())
  - Main processing loop (MainProc())
  - Profile settings management
  - Window management (CTachyonWnd)
  - Accelerator table support

**TachyonWnd**
- **Files**: TachyonWnd.cpp, TachyonWnd.h
- **Purpose**: Main game window management
- Window event handling

**TachyonRes** (Resource Management)
- **Files**: TachyonRes.cpp, TachyonRes.h
- **Purpose**: Game resource loading and caching
- Asset streaming and management

**TachyonMesh** (3D Mesh System)
- **Files**: TachyonMesh.cpp, TachyonMesh.h (100+ lines)
- **Purpose**: 3D model management and rendering
- **Key Features**:
  - Global vertex buffer management (m_mapVB, m_vFILEVB)
  - Level-of-detail (LOD) system (GetLevel, m_fLevelFactor)
  - Indexed mesh rendering
  - Dynamic mesh loading/unloading
  - Bone-based skeletal animation (m_pBones)
  - Bounding sphere collision (m_vCenterPoint, m_fRadius)
  - Software/Hardware vertex processing
  - Hit testing support
  - Z-buffer state management

**TachyonAnimation**
- **Files**: TachyonAnimation.cpp, TachyonAnimation.h
- **Purpose**: Skeletal and keyframe animation
- Animation blending and interpolation

**TachyonObject**
- **Files**: TachyonObject.cpp, TachyonObject.h
- **Purpose**: Base game object class
- Object lifecycle management

#### **3. Map & World System**

**TachyonMAP** (Base Map System)
- **Files**: TachyonMAP.cpp, TachyonMAP.h (24 lines)
- **Purpose**: Base class for all map types
- **Key Features**:
  - Object management (m_mapOBJ)
  - SFX (special effects) management (m_mapSFX)
  - Sound management (m_mapSND)
  - Height map queries (GetHeight)
  - Detail texture support (m_pDetail)

**TachyonBSPMAP** (Binary Space Partition Map)
- **Files**: TachyonBSPMAP.cpp, TachyonBSPMAP.h
- **Purpose**: Indoor/structured map system
- BSP tree for visibility culling

**TachyonEXTMAP** (Exterior Map)
- **Files**: TachyonEXTMAP.cpp, TachyonEXTMAP.h
- **Purpose**: Outdoor terrain system
- Large-scale outdoor environments

**TachyonHUGEMAP** (Large-Scale Map)
- **Files**: TachyonHUGEMAP.cpp, TachyonHUGEMAP.h
- **Purpose**: Massive open-world map system
- Streaming and LOD management

**TBSPNode** (BSP Tree Node)
- **Files**: TBSPNode.cpp, TBSPNode.h
- **Purpose**: BSP tree node implementation
- Spatial partitioning

**TBSPPortal** (BSP Portal System)
- **Files**: TBSPPortal.cpp, TBSPPortal.h
- **Purpose**: Portal-based visibility system
- Potentially visible set (PVS) calculation

#### **4. Effects & Visual Systems**

**TachyonSFX** (Special Effects)
- **Files**: TachyonSFX.cpp, TachyonSFX.h
- **Purpose**: Particle and visual effects system
- Effect spawning and management

**TachyonSlashSFX** (Slash Effects)
- **Files**: TachyonSlashSFX.cpp, TachyonSlashSFX.h
- **Purpose**: Combat slash effect rendering
- Weapon trail effects

**TachyonWater**
- **Files**: TachyonWater.cpp, TachyonWater.h
- **Purpose**: Water rendering system
- Reflection and refraction

**TDynamicBillboard**
- **Files**: TDynamicBillboard.cpp, TDynamicBillboard.h
- **Purpose**: Billboard sprite system
- Camera-facing sprites (particles, effects)

#### **5. Media & Audio**

**TachyonMedia**
- **Files**: TachyonMedia.cpp, TachyonMedia.h
- **Purpose**: Media playback system
- Video and audio integration

**T3DMusic**
- **Files**: T3DMusic.cpp, T3DMusic.h
- **Purpose**: Background music system
- Music streaming and playback

#### **6. Texture Management**

**T3DTexture**
- **Files**: T3DTexture.cpp, T3DTexture.h
- **Purpose**: Texture loading and management
- Texture caching and streaming

**TachyonCompressor**
- **Files**: TachyonCompressor.cpp, TachyonCompressor.h
- **Purpose**: Asset compression/decompression
- Custom compression format

#### **7. Network & Session**

**TachyonSession**
- **Files**: TachyonSession.cpp, TachyonSession.h
- **Purpose**: Network session management
- Client-server communication

**Packet**
- **Files**: Packet.cpp, Packet.h
- **Purpose**: Network packet handling
- Serialization/deserialization

**TBitStream**
- **Files**: TBitStream.cpp, TBitStream.h
- **Purpose**: Bit-level data streaming
- Efficient network data packing

#### **8. UI & Interface**

**TConsole**
- **Files**: TConsole.cpp, TConsole.h
- **Purpose**: In-game developer console
- Command execution and debugging

**TShow**
- **Files**: TShow.cpp, TShow.h
- **Purpose**: UI display system
- HUD and menu rendering

#### **9. Utility & Support Systems**

**FrameGroup**
- **Files**: FrameGroup.cpp, FrameGroup.h
- **Purpose**: Frame grouping and management
- Animation frame organization

**TMath**
- **Files**: TMath.cpp, TMath.h
- **Purpose**: Mathematical utilities
- Vector, matrix, and geometric calculations

**TProfile**
- **Files**: TProfile.cpp, TProfile.h
- **Purpose**: Performance profiling
- FPS and timing measurements

**TModuleProtector**
- **Files**: TModuleProtector.cpp, TModuleProtector.h
- **Purpose**: Anti-cheat/integrity checking
- Module protection system

**TNICEventSink**
- **Files**: TNICEventSink.cpp, TNICEventSink.h
- **Purpose**: Network interface card event handling
- Network connection monitoring

#### **10. Compression Library**

**zlib**
- **Directory**: zlib/
- **Purpose**: Standard zlib compression library
- Used by TachyonCompressor

---

## Technical Details

### Development Environment
- **Language**: C++ (Visual C++)
- **Framework**: Microsoft Foundation Classes (MFC)
- **Graphics API**: DirectX 9 (Direct3D 9)
- **Audio API**: DirectSound
- **Project Format**: Visual Studio 2005/2008 (.vcproj files), some 2010+ (.vcxproj)
- **Solution Files**: Multiple .sln files for different components

### Key Technologies
- **BSP Trees**: For indoor map visibility culling
- **Level-of-Detail (LOD)**: Dynamic mesh quality based on distance
- **Skeletal Animation**: Bone-based character animation
- **Shader System**: Vertex and pixel shaders (HLSL)
- **Portal Rendering**: For optimized indoor rendering
- **Streaming**: Asset streaming for large worlds
- **Multi-threading**: Thread-safe rendering (critical sections)

### File Formats (Inferred)
- **.TMO**: Tachyon Map Object files
- **.TMF**: Tachyon Mesh Format files
- **.IDH**: Index/Data Header files
- **.TMH**: Tachyon Map Header files
- **.TCML**: Tachyon Content Markup Language (XML-like)
- **.TRC**: Tachyon Resource Container

### Language Notes
- Most comments and documentation are in **Korean** (인코딩 문제로 인해 일부 텍스트 깨짐)
- Some English documentation exists in ReadMe.txt files
- Variable names and function names are in English

---

## System Integration

### TClient/Tools ↔ Engine Lib Relationship

The tools in TClient/Tools are **content creation and debugging applications** that:
1. Use the Engine Lib to **visualize and test** game assets
2. **Generate binary data files** consumed by the game client
3. Provide **editors** for game designers to create content
4. Enable **debugging and inspection** of runtime game state

**Example Workflow**:
- Designer uses **TQuestEditor** to create quest data
- **TBuilder** compiles assets into binary format
- **TExplorer** tests the quest in-engine
- **TMapViewer** validates map placement
- Game client loads compiled assets using **TachyonRes**

### Engine Architecture Layers

```
┌─────────────────────────────────────────┐
│   Game Tools (TClient/Tools)            │
│   - Content Creation                     │
│   - Asset Management                     │
│   - Debugging                            │
└─────────────────┬───────────────────────┘
                  │ Uses
┌─────────────────▼───────────────────────┐
│   Engine Lib (TClient/TEngine)          │
│   ┌───────────────────────────────────┐ │
│   │  Application Layer (TachyonApp)   │ │
│   └───────┬───────────────────────────┘ │
│   ┌───────▼───────────────────────────┐ │
│   │  Game Object Layer                │ │
│   │  (TachyonObject, Animation)       │ │
│   └───────┬───────────────────────────┘ │
│   ┌───────▼───────────────────────────┐ │
│   │  World/Map Layer                  │ │
│   │  (BSP/EXT/HUGE MAP)               │ │
│   └───────┬───────────────────────────┘ │
│   ┌───────▼───────────────────────────┐ │
│   │  Graphics Layer (D3DDevice)       │ │
│   │  (Mesh, Texture, Shader, Light)   │ │
│   └───────┬───────────────────────────┘ │
│   ┌───────▼───────────────────────────┐ │
│   │  DirectX 9 API                    │ │
│   └───────────────────────────────────┘ │
└─────────────────────────────────────────┘
```

---

## Notable Design Patterns

1. **Resource Management**: Centralized through TachyonRes with caching
2. **Global Pools**: Static vertex buffer pools (TachyonMesh::m_mapVB)
3. **Object Hierarchies**: Base classes (CTachyonMAP) with specialized implementations
4. **MFC Integration**: Heavy use of CWinApp, CWnd, CObject patterns
5. **Factory Pattern**: Likely used for object creation (TachyonObject)
6. **Observer Pattern**: Event sinks (TNICEventSink)
7. **Command Pattern**: Console command system (TConsole)

---

## Performance Considerations

- **Polygon Counting**: CD3DDevice::m_dwPolyCount for profiling
- **Memory Tracking**: Video memory (m_lVIDEOMEM) and system memory monitoring
- **LOD System**: Distance-based mesh quality reduction
- **Culling**: BSP and portal-based visibility culling
- **VB Pooling**: Reusable vertex buffers to reduce allocation overhead
- **Texture Streaming**: On-demand texture loading
- **Multi-threading**: Thread-safe device access with critical sections

---

## Security & Protection

Multiple anti-cheat systems integrated:
- **HShield**: Korean game protection system
- **NPGame**: Nprotect GameGuard
- **XTrap**: Another anti-cheat solution
- **Apex**: Additional protection layer
- **TModuleProtector**: Custom module integrity checking

---

## Summary

The 4S codebase is a **mature, full-featured MMORPG engine** with:
- **Comprehensive toolset** (21 specialized tools) for content creation
- **Robust 3D engine** built on DirectX 9 with advanced features
- **Multiple map types** supporting both indoor (BSP) and outdoor (terrain) environments
- **Complete game systems**: animation, effects, audio, networking
- **Professional architecture** with clear separation of concerns
- **Performance-focused** design with LOD, culling, and pooling
- **Security-conscious** with multiple anti-cheat integrations

**Total Scope**:
- **Engine Lib**: ~42,710 lines of core C++ code
- **Tools**: 21 applications totaling several hundred thousand lines
- **Technology**: DirectX 9, MFC, multi-threaded rendering
- **Target Platform**: Windows (Visual Studio 2005-2010+)

This represents a significant commercial game development effort, typical of mid-2000s Korean MMORPG development.
