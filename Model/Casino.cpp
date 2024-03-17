#include "Casino.h"
#include <iostream>

Casino::Casino() {}

Casino::~Casino() {
    // Liberar memoria de los juegos
    for (Juego* juego : juegos) {
        delete juego;
    }
}

void Casino::agregarJugador(const Jugador& jugador) {
    jugadores.push_back(jugador);
}

void Casino::agregarJuego(Juego* juego) {
    juegos.push_back(juego);
}

void Casino::mostrarInfoJugador(const std::string& id) {
    bool encontrado = false;
    for (const Jugador& jugador : jugadores) {
        if (jugador.getId() == id) {
            encontrado = true;
            std::cout << "Información del jugador:" << std::endl;
            std::cout << "ID: " << jugador.getId() << std::endl;
            std::cout << "Nombre: " << jugador.getNombre() << std::endl;
            std::cout << "Saldo en Gonzos: " << jugador.getSaldoGonzos() << std::endl;
            break;
        }
    }
    if (!encontrado) {
        std::cout << "El jugador con ID " << id << " no existe." << std::endl;
    }
}

void Casino::venderGonzos(const std::string& id, int cantidadGonzos) {
    for (Jugador& jugador : jugadores) {
        if (jugador.getId() == id) {
            jugador.agregarGonzos(cantidadGonzos);
            std::cout << "Se han vendido " << cantidadGonzos << " Gonzos al jugador " << id << "." << std::endl;
            return;
        }
    }
    std::cout << "El jugador con ID " << id << " no existe." << std::endl;
}

void Casino::retirarJugador(const std::string& id) {
    for (auto it = jugadores.begin(); it != jugadores.end(); ++it) {
        if ((*it).getId() == id) {
            jugadores.erase(it);
            std::cout << "Se ha retirado al jugador con ID " << id << " del casino." << std::endl;
            return;
        }
    }
    std::cout << "El jugador con ID " << id << " no existe." << std::endl;
}

void Casino::jugar(const std::string& id) {
    // Implementar lógica para que el jugador con el ID especificado juegue
    // Puede ser necesario interactuar con los juegos disponibles y actualizar el saldo del jugador
}

void Casino::mostrarReglasJuegos() {
    std::cout << "Reglas de los juegos disponibles:" << std::endl;
    for (const Juego* juego : juegos) {
        juego->mostrarReglas();
    }
}
