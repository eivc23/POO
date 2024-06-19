#ifndef POO_DUENDE_H
#define POO_DUENDE_H

#include "Enemigo.h"

class Duende : public Enemigo {
public:
    Duende( const std::string &nombre, int danio, float vida, float agilidad, int magia);
    Duende();
    ~Duende();

    void recibirDanio() override;

    float getAgilidad() const;
    void setAgilidad(float agilidad);

    int getMagia() const;
    void setMagia(int magia);

private:
    float agilidad;
    int magia;
};

#endif //POO_DUENDE_H

