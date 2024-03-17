#ifndef JUEGO_H
#define JUEGO_H

#include <string>

class Juego {
protected:
    std::string nombre;
    std::string descripcion;
    int monto_minimo_apuesta;

public:
    Juego(const std::string& _nombre, const std::string& _descripcion, int _monto_minimo_apuesta);
    virtual ~Juego() {}
    virtual void mostrarReglas() const = 0;
    virtual void jugar(Jugador* jugador, int apuesta) = 0;

protected:
    int generarNumeroAleatorio(int min, int max);
};

#endif // JUEGO_H
