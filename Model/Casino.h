#ifndef CASINO_H
#define CASINO_H

#include <vector>
#include <string>
#include "Jugador.h"
#include "Juego.h"

class Casino {
private:
    std::vector<Jugador> jugadores;
    std::vector<Juego*> juegos;

public:
    Casino();
    ~Casino();

    void agregarJugador(const Jugador& jugador);
    void agregarJuego(Juego* juego);
    void mostrarInfoJugador(const std::string& id);
    void venderGonzos(const std::string& id, int cantidadGonzos);
    void retirarJugador(const std::string& id);
    void jugar(const std::string& id);
    void mostrarReglasJuegos();

private:
    void mostrarInfoJugadorAux(const Jugador& jugador);
    void venderGonzosAux(const std::string& id, int cantidadGonzos);
};

#endif // CASINO_H
