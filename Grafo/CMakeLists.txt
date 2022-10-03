cmake_minimum_required(VERSION 3.23)
project(Grafo C)

set(CMAKE_C_STANDARD 99)

add_executable(Grafo main.c aresta.c aresta.h grafo.c grafo.h)
