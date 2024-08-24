project(hashMap C)
cmake_minimum_required(VERSION 3.25)
set(CMAKE_C_COMPILER_VERSION "4.6.3")
add_compile_options(-Wall -Wextra -Wpedantic)

add_library(hashMap HashMap.h hashMap.c)
