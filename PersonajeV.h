
#ifndef POO_PERSONAJEV_H
#define POO_PERSONAJEV_H
#include <iostream>
#include "Habilidad.h"
#include <vector>
#include "Enemigo.h"

class PersonajeV : public Habilidad{
public:

    PersonajeV();
    PersonajeV (const std::string &nombre, int edad , int vida, float peso);
    virtual void ataque(Enemigo* enemigo);
    virtual ~PersonajeV();

    std::string getnombre() const;
    void setnombre(const std::string nombre);
    int getedad();
    void setedad( int edad);
    int getvida();
    void setvida(int vida);
    float getpeso();
    void setpeso(float peso);
    void addHabilidad(Habilidad* habilidad);
    void usarHabilidades();



private:
    std::string nombre;
    int edad;
    float vida;
    float peso;
    std::vector<Habilidad*> habilidades;

};

#endif //POO_PERSONAJEV_H
