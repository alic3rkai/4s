# 4S (Four Story) Game Engine

Welcome to the 4S game engine repository. This is a comprehensive MMORPG game engine with client, server, and development tools.

## Documentation

### File System Documentation

Learn how files are loaded, accessed, modified, and displayed in the 4S engine:

- **[FILE_SYSTEM_SUMMARY.md](FILE_SYSTEM_SUMMARY.md)** - Quick reference guide with tables, examples, and tips
- **[FILE_SYSTEM_DOCUMENTATION.md](FILE_SYSTEM_DOCUMENTATION.md)** - Complete in-depth documentation

The file system documentation covers:
- Loading mechanisms (CFile, GSF format, TChart, file dialogs)
- Access patterns (direct, deferred, memory-mapped, cached)
- Modification operations (read/write, serialization, encryption)
- Display and rendering (textures, meshes, maps, UI, animations, effects)
- Architecture diagrams and code examples
- Best practices and troubleshooting

## Project Structure

```
4S/
├── TClient/              # Game client components
│   ├── TEngine/          # Game engine core
│   ├── TChart/           # Game data management
│   ├── TChatClient/      # Chat client
│   ├── TLoader/          # Game loader
│   └── Tools/            # Development tools
│       └── TBuilder/     # Asset building tool
├── TServer/              # Server components
│   ├── TWorldSvr/        # World server
│   ├── TLoginSvr/        # Login server
│   ├── TMapSvr/          # Map server
│   ├── TRelaySvr/        # Relay server
│   └── TInstallSvr/      # Installation server
├── TSimulation/          # Simulation utilities
├── Build/                # Build output
└── Includes/             # External libraries and headers

TClient_Branch101012/     # Client branch version
└── [Similar structure to TClient]
```

## Key Components

### Client
- **TEngine**: Core game engine with graphics, physics, and game logic
- **TChart**: Game data and configuration management
- **TChatClient**: In-game chat system
- **Tools**: Asset creation and management tools

### Server
- **TWorldSvr**: Main game world server
- **TLoginSvr**: Authentication and login management
- **TMapSvr**: Map and zone management
- **TRelaySvr**: Network relay for optimized communication

### Development Tools
- **TBuilder**: Game asset builder (textures, meshes, maps, UI)
- **TChartProtect**: Data protection utilities
- **SvrTester**: Server testing tools

## Getting Started

### Prerequisites
- Windows OS (Windows XP or later)
- Visual Studio (project files included)
- DirectX SDK (for graphics)
- MFC (Microsoft Foundation Classes)

### Building
1. Open `TProject.sln` for client components
2. Open `TServer/TServer.sln` for server components
3. Build the desired configuration (Debug/Release)

### Documentation Files
- `4S说明.txt` - Chinese documentation
- `4S Install.txt` - Installation instructions
- `FILE_SYSTEM_DOCUMENTATION.md` - File system technical documentation
- `FILE_SYSTEM_SUMMARY.md` - File system quick reference

## Technologies Used

- **Language**: C++ with MFC
- **Graphics**: DirectX 9
- **UI**: Custom UI system with GSF format
- **Network**: Custom TCP/IP protocol
- **Database**: ODBC-compatible databases
- **Tools**: Visual Studio, 3ds Max plugins

## File Formats

- **GSF** - Game Studio Format (packaged game assets)
- **TChart** - Game data tables and configuration
- **STA** - Statistics and simulation data
- **Various** - Standard formats (BMP, TGA, DDS for textures)

## Contributing

This is a game engine project. When contributing:
1. Understand the architecture first
2. Follow existing code patterns
3. Document your changes
4. Test thoroughly before submitting

## License

[License information would go here]

## Contact

[Contact information would go here]

---

*For technical details on file handling, see the [File System Documentation](FILE_SYSTEM_DOCUMENTATION.md)*
