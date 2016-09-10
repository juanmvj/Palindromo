cmake_minimum_required(VERSION 2.8.9)
project(Palindromo)

include_directories(include)

set(SOURCES src/Nodo.cpp src/Cola.cpp src/Pila.cpp src/main.cpp src/Palindromo.cpp)

add_executable(Palindromo ${SOURCES})