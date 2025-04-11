# SFML-IMGUI-Template C++

A C++ project using **SFML**, **Dear ImGui**, and **ImGui-SFML**, managed with **CMake** using `FetchContent` for automatic dependency handling. Developed for Windows — **not tested on other operating systems**!

## 📦 Dependencies

This project uses the following libraries:

- [SFML 3.0.0](https://github.com/SFML/SFML) – A simple multimedia library for graphics, window management, and system functionality.
- [Dear ImGui 1.91.9b](https://github.com/ocornut/imgui) – A GUI library for C++ focused on tools and debugging interfaces.
- [ImGui-SFML v3.0](https://github.com/SFML/imgui-sfml) – A wrapper that integrates Dear ImGui with SFML.

## 🔧 Requirements

- CMake >= 3.14
- C++17 or higher compatible compiler
- Git

## 🛠️ How to Build

Clone this repository:

```bash
git clone https://github.com/RaphaVico/SFML-IMGUI-Template.git
cd SFML-IMGUI-Template
```

Create a `build` folder and compile the project using CMake:

```bash
mkdir build
cd build
cmake .. -DCMAKE_POLICY_VERSION_MINIMUM=3.5
cmake --build .
```

> 💡 **Note:** On Windows systems using Visual Studio, you may need to specify the target architecture with `-A x64`:

```bash
cmake .. -A x64 -DCMAKE_POLICY_VERSION_MINIMUM=3.5
```

This flag ensures the project is built for 64-bit systems.

To build the executable, run the following command inside the `build` folder:

```bash
cmake --build .
```

This will compile the project using the CMake configuration.

## ▶️ How to Run

After building, the executable will be available in the `build/Debug` folder. To run it:

```bash
./main.exe
```

## 📁 Project Structure

```
SFML-IMGUI-Template/
├── build/
├── include/
├── lib/
├── src/
│   └── main.cpp
├── CMakeLists.txt
├── Makefile
└── README.md
```

## ⚙️ Technical Details

The `CMakeLists.txt` is configured to:

- Disable the `audio` and `network` modules from SFML to reduce dependencies.
- Enable the default ImGui demo with `IMGUI_SFML_IMGUI_DEMO`.
- Use `FetchContent` to automatically download and build the required libraries.

## 🧪 Tested With

- GCC 13 / Clang 16
- CMake 3.28
- SFML 3.0.0
- ImGui 1.91.9b
- ImGui-SFML v3.0
