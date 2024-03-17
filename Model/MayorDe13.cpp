#include "MayorDe13.h"
#include <iostream>

MayorDe13::MayorDe13(const std::string& nombre, const std::string& descripcion, int monto_minimo_apuesta)
        : Juego(nombre, descripcion, monto_minimo_apuesta) {}

void MayorDe13::mostrarReglas() const {
    std::cout << "******************************" << std::endl;
    std::cout << "Reglas del juego Mayor de 13:" << std::endl;
    std::cout << "- El jugador elige un número entre 1 y 13." << std::endl;
    std::cout << "- Si el número del jugador es mayor que el del casino, gana el doble de lo apostado." << std::endl;
    std::cout << "- Si el número del jugador es menor o igual que el del casino, pierde lo apostado." << std::endl;
    std::cout << "- El jugador puede retirarse en cualquier momento y perderá la mitad de lo apostado." << std::endl;
    std::cout << "******************************" << std::endl;
}

void MayorDe13::jugar(Jugador* jugador, int apuesta) {
    if (apuesta < monto_minimo_apuesta) {
        std::cout << "La apuesta debe ser mayor o igual a " << monto_minimo_apuesta << std::endl;
        return;
    }

    int numUsuario = generarNumeroAleatorio(1, 13);
    std::cout << "Su número es: " << numUsuario << std::endl;

    int numCasino = generarNumeroAleatorio(1, 13);
    std::cout << "El número del casino es: " << numCasino << std::endl;

    char opcion;
    std::cout << "¿Desea continuar (c) o retirarse (r)? ";
    std::cin >> opcion;

    if (opcion == 'r' || opcion == 'R') {
        // El usuario decide retirarse
        std::cout << "Se ha retirado. Perdió la mitad de su apuesta." << std::endl;
        jugador->agregarGonzos(-apuesta / 2);
    } else {
        // El usuario decide continuar
        if (numUsuario <= numCasino) {
            // El usuario pierde
            std::cout << "El número del casino es mayor o igual que el suyo. Perdió todo lo apostado." << std::endl;
            jugador->agregarGonzos(-apuesta);
        } else {
            // El usuario gana
            std::cout << "¡Felicidades! Su número es mayor que el del casino. Ganó el doble de lo apostado." << std::endl;
            jugador->agregarGonzos(2 * apuesta);
        }
    }
}
