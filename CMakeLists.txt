cmake_minimum_required(VERSION 2.8)
project(DEMO)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "bin/")
set(CMAKE_CXX_FLAGS "-g -Wall")

add_executable(main src/main.c src/func.c)