#ifndef POO_MAGO_H
#define POO_MAGO_H

#include <iostream>
#include "PersonajeV.h"
#include "Inventario.h"

class Mago:public PersonajeV, public Inventario{


public:
    Mago();
    Mago(const std::string &nombre, int edad, int vida, float peso, const std::string &TipoMagia, bool usaVarita);
    ~Mago();
    void ataque (Enemigo* enemigo)override;

    std::string getTipoMagia() const;
    void setTipoMagia(const std::string TipoMagia);
    bool getusaVarita();
    void setusaVarita( bool usaVarita);

private:
    bool usaVarita;
    std::string TipoMagia;


};




#endif //POO_MAGO_H
