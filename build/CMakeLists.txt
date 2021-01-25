cmake_minimum_required(VERSION 3.14)
project(libft)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "../src/*.c")
add_library(ft STATIC ${SOURCES})
