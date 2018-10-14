cmake_minimum_required(VERSION 3.12)
project(c C)

set(CMAKE_C_STANDARD 99)

add_library(c library.c library.h chapter1/hello.c chapter1/temperatures_while.c chapter1/temperatures_for.c)

ADD_EXECUTABLE(HELLO chapter1/hello.c)
ADD_EXECUTABLE(TEMPERATURES_WHILE chapter1/temperatures_while.c)
ADD_EXECUTABLE(TEMPERATURES_FOR chapter1/temperatures_for.c)
