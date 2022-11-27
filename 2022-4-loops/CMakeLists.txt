cmake_minimum_required(VERSION 3.23)
project(2022_cpl_coding_1 C)


set(CMAKE_C_STANDARD 11)

add_executable(sudoku sudoku.c)
add_executable(mine mine.c)
add_executable(trace trace.c)
add_executable(matrix-mult matrix-mult.c)
add_executable(life-one-dimension life-one-dimension.c)
add_executable(life life.c)