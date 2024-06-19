
#ifndef POO_GUERRERO_H
#define POO_GUERRERO_H
#include "PersonajeV.h"
#include "Inventario.h"

class Guerrero:public PersonajeV, public Inventario {

public:

    Guerrero();
    Guerrero(const std::string &nombre, int edad, int vida, float peso, const std::string &TipoArmadura, bool usaEspada);
    ~Guerrero();
    void ataque(Enemigo* enemigo) override;

    std::string getTipoArmadura() const;
    void setTipoArmadura(const std::string TipoArmadura);
    bool getusaEspada();
    void setusaEspada( bool usaEspada);

private:
    bool usaEspada;
    std::string TipoArmadura;


};



#endif //POO_GUERRERO_H
