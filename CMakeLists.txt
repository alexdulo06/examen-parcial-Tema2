cmake_minimum_required(VERSION 3.29)
project(examen_parcial_Tema2)

set(CMAKE_CXX_STANDARD 14)

include_directories("Ejercicio 1")

add_executable(examen_parcial_Tema2
        main.h
        main.cpp
        "Ejercicio 1/ejercicio1.h"
        "Ejercicio 1/ejercicio1.cpp"
        "Ejercicio 2/ejercicio2.cpp"
        "Ejercicio 2/ejercicio2.h"
        "Ejercicio 3/ejercicio3.cpp"
        "Ejercicio 3/ejercicio3.h"
        "Ejercicio 4/ejercicio4.h"
        "Ejercicio 4/ejercicio4.cpp")
