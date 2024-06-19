#include "Duende.h"

Duende::~Duende() {
    std::cout << "El duende ha sido derrotado" << std::endl;
}
Duende::Duende(){
    this->agilidad = 0.0f;
    this->magia = 0;
}
Duende::Duende( const std::string &nombre, int danio, float vida, float agilidad, int magia)
        : Enemigo( nombre, danio, vida),  agilidad(agilidad), magia(magia) {}

void Duende::recibirDanio() {
    std::cout << "El duende ha recibido daño" << std::endl;
}

float Duende::getAgilidad() const {
    return agilidad;
}

void Duende::setAgilidad(float agilidad) {
    this->agilidad = agilidad;
}

int Duende::getMagia() const {
    return magia;
}

void Duende::setMagia(int magia) {
    this->magia = magia;
}

