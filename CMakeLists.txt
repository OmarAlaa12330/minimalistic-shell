cmake_minimum_required(VERSION 3.10)
project(minimalistic-shell)

set(CMAKE_C_STANDARD 17)

file(GLOB_RECURSE SOURCES src/*.c)


include_directories(headers)

add_executable(minimalistic-shell main.c ${SOURCES})
