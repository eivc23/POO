#ifndef POO_ORCO_H
#define POO_ORCO_H

#include "Enemigo.h"

class Orco : public Enemigo {
public:
    Orco( const std::string &nombre, int danio, float vida, int fuerza, int resistencia);
    Orco();
    ~Orco();
    void recibirDanio() override;

    int getFuerza() const;
    void setFuerza(int fuerza);

    int getResistencia() const;
    void setResistencia(int resistencia);

private:
    int fuerza;
    int resistencia;
};

#endif //POO_ORCO_H

