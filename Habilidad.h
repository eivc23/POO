#ifndef POO_HABILIDAD_H
#define POO_HABILIDAD_H


#include <iostream>
#include <vector>

class Habilidad {
public:
    Habilidad();
    virtual ~Habilidad();
    virtual void usarHabilidad();
    virtual void addHabilidad(const std::string &habilidad);
    virtual void deleteHabilidad(const std::string &habilidad);
    virtual void mostrarHabilidad();


private:
    std::vector<std::string> habilidades;
};


#endif //POO_HABILIDAD_H
