cmake_minimum_required(VERSION 3.10)
project(minimalistic-shell)

set(CMAKE_CXX_STANDARD 17)

file(GLOB_RECURSE SOURCES src/*.cpp)

file(GLOB_RECURSE HEADERS headers/*.hpp)

add_executable(minimalistic-shell main.cpp ${SOURCES} ${HEADERS})
