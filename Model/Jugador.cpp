#include "Jugador.h"
#include <iostream>

Jugador::Jugador(const std::string& _id, const std::string& _nombre, int _saldoGonzos)
        : id(_id), nombre(_nombre), saldoGonzos(_saldoGonzos) {}

std::string Jugador::getId() const { return id; }

std::string Jugador::getNombre() const { return nombre; }

int Jugador::getSaldoGonzos() const { return saldoGonzos; }

void Jugador::agregarGonzos(int cantidad) {
    saldoGonzos += cantidad;
}
