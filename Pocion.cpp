#include "Pocion.h"

Pocion::Pocion() {

}

Pocion::~Pocion() {
}

void Pocion::usarItem()  {
    std::cout << "¡Haz utilizado una pocion!" << std::endl;
}

Pocion::Pocion(const std::string &nombre,int efecto) : Item (nombre), efecto(efecto) {}


int Pocion::getEfecto() const {
    return efecto;
}

void Pocion::setEfecto(int efecto) {
    this->efecto = efecto;

}


