#include "Juego.h"
#include <iostream>

Juego::Juego(const std::string& _nombre, const std::string& _descripcion, int _monto_minimo_apuesta)
        : nombre(_nombre), descripcion(_descripcion), monto_minimo_apuesta(_monto_minimo_apuesta) {}

int Juego::generarNumeroAleatorio(int min, int max) {
    return rand() % (max - min + 1) + min;
}
