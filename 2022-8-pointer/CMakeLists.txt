cmake_minimum_required(VERSION 3.23)
project(2022_cpl_coding_1 C)


set(CMAKE_C_STANDARD 11)

add_executable(interpreter interpreter.c)
add_executable(substr substr.c)
add_executable(title title.c)