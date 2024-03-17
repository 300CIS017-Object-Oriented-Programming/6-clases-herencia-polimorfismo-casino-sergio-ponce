#ifndef DOSCOLORES_H
#define DOSCOLORES_H

#include "Juego.h"

class DosColores : public Juego {
public:
    DosColores(const std::string& nombre, const std::string& descripcion, int monto_minimo_apuesta);
    void mostrarReglas() const override;
    void jugar(Jugador* jugador, int apuesta) override;
};

#endif // DOSCOLORES_H
