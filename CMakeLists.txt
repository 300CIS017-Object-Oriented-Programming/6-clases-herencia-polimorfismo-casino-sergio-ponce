cmake_minimum_required(VERSION 3.19)
project(CASINO-Polimorfismo)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        #Nombre del ejecutable
        casino
        #Lista de archivos a compilar en este target
        main.cpp
        Model/Juego.h
        Model/Juego.cpp
        Model/Casino.cpp
        Model/DosColores.cpp
        Model/Jugador.cpp
        Model/MayorDe13.cpp)
