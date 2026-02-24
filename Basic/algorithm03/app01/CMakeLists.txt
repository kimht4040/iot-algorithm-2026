cmake_minimum_required(VERSION 4.1)
project(app01 C)

set(CMAKE_C_STANDARD 11)

add_executable(app01 main.c
        IntQueue.c
        IntQueue.h)
