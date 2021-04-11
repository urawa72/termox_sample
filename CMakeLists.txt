cmake_minimum_required(VERSION 3.2)
enable_language(CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(hello-world LANGUAGES CXX)

add_subdirectory(external/TermOx)

add_executable(hello-world src/main.cpp)
target_link_libraries(hello-world PRIVATE TermOx)
