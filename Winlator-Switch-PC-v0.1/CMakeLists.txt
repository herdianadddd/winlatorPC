cmake_minimum_required(VERSION 3.20)

project(WinlatorSwitchPC)

set(CMAKE_CXX_STANDARD 17)


find_package(SDL2 REQUIRED)


add_executable(
WinlatorSwitchPC

main.cpp
app.cpp
renderer.cpp
container.cpp
)


target_link_libraries(
WinlatorSwitchPC
SDL2::SDL2
)
