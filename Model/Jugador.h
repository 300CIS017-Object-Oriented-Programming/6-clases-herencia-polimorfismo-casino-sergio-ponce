#ifndef JUGADOR_H
#define JUGADOR_H

class Jugador {
private:
    std::string id;
    std::string nombre;
    int saldoGonzos;

public:
    Jugador(const std::string& _id, const std::string& _nombre, int _saldoGonzos);
    std::string getId() const;
    std::string getNombre() const;
    int getSaldoGonzos() const;
    void agregarGonzos(int cantidad);
};

#endif // JUGADOR_H
