cmake_minimum_required(VERSION 4.1)
project(app3 C)

set(CMAKE_C_STANDARD 11)

add_executable(app3 main.c
        IntStack.h
        IntStack.c)
