cmake_minimum_required(VERSION 3.23)
project(2022_cpl_coding_1 C)


set(CMAKE_C_STANDARD 11)
add_executable(pascal pascal.c)
add_executable(tiles tiles.c)
add_executable(poi poi.c)
add_executable(poi-non-re poi-non-re.c)
add_executable(max-non-re max-non-re.c)
add_executable(max max.c)
add_executable(integration integration.c)
add_executable(triangle triangle.c)
add_executable(integration_remake integration_remake.c)