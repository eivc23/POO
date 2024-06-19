#include "Orco.h"

Orco::~Orco() {
    std::cout << "El orco ha sido derrotado" << std::endl;
}

Orco::Orco() {
    this->fuerza = 0;
    this->resistencia = 0;
}

Orco::Orco(const std::string &nombre, int danio, float vida, int fuerza, int resistencia)
        : Enemigo(nombre, danio, vida), fuerza(fuerza), resistencia(resistencia) {}

void Orco::recibirDanio() {
    std::cout << "El orco ha recibido daño y se ha enfurecido" << std::endl;
}

int Orco::getFuerza() const {
    return fuerza;
}

void Orco::setFuerza(int fuerza) {
    this->fuerza = fuerza;
}

int Orco::getResistencia() const {
    return resistencia;
}

void Orco::setResistencia(int resistencia) {
    this->resistencia = resistencia;
}
