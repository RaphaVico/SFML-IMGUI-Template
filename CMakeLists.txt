cmake_minimum_required(VERSION 3.14)
project(MeuProjeto VERSION 1.0 LANGUAGES CXX)

include(FetchContent)

# Add SFML as a dependency
FetchContent_Declare(
  SFML
  GIT_REPOSITORY https://github.com/SFML/SFML.git
  GIT_TAG 3.0.0
)
option(SFML_BUILD_AUDIO "Build audio" OFF)
option(SFML_BUILD_NETWORK "Build network" OFF)
FetchContent_MakeAvailable(sfml)

# Add Dear ImGui as a dependency
FetchContent_Declare(
  imgui
  GIT_REPOSITORY https://github.com/ocornut/imgui.git
  GIT_TAG v1.91.9b
)
FetchContent_MakeAvailable(imgui)

# Add ImGui-SFML with explicit IMGUI_DIR
FetchContent_Declare(
  imgui-sfml
  GIT_REPOSITORY https://github.com/SFML/imgui-sfml.git
  GIT_TAG v3.0
)
set(IMGUI_DIR ${imgui_SOURCE_DIR})
option(IMGUI_SFML_FIND_SFML "Use find_package to find SFML" OFF)
option(IMGUI_SFML_IMGUI_DEMO "Build imgui_demo.cpp" ON)
FetchContent_MakeAvailable(imgui-sfml)
# Add the main executable
add_executable(main src/main.cpp)

# Include necessary directories
target_include_directories(main PRIVATE
  ${SFML_INCLUDE_DIRS}
  ${IMGUI_DIR}
)

# Link required libraries
target_link_libraries(main PRIVATE
  sfml-graphics
  sfml-window
  sfml-system
  ImGui-SFML::ImGui-SFML
)