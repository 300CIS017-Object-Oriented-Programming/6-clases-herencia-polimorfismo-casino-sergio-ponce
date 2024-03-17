#ifndef MAYORDE13_H
#define MAYORDE13_H

#include "Juego.h"

class MayorDe13 : public Juego {
public:
    MayorDe13(const std::string& nombre, const std::string& descripcion, int monto_minimo_apuesta);
    void mostrarReglas() const override;
    void jugar(Jugador* jugador, int apuesta) override;
};

#endif // MAYORDE13_H
