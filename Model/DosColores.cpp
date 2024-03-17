#include "DosColores.h"
#include <iostream>
DosColores::DosColores(const std::string& nombre, const std::string& descripcion, int monto_minimo_apuesta)
        : Juego(nombre, descripcion, monto_minimo_apuesta) {}

void DosColores::mostrarReglas() const {
    std::cout << "******************************" << std::endl;
    std::cout << "Reglas del juego Dos Colores:" << std::endl;
}