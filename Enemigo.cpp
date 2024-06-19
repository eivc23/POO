#include "Enemigo.h"

Enemigo::~Enemigo() {
    std::cout<<" El enemigo ha sido derrotado"<<std::endl;
}
Enemigo::Enemigo() {
    this->danio = 0;
    this->vida = 0.0f;

}
void Enemigo::recibirDanio() {
    std::cout << "El enemigo ha empezado a sangrar" << std::endl;
}
Enemigo::Enemigo( const std::string &nombre,int danio, float vida)
        : nombre(nombre), danio(danio), vida(vida){}


int Enemigo::getdanio() const {
    return danio;
}

void Enemigo::setdanio(int danio) {
    this->danio = danio;
}

float Enemigo::getvida() const {
    return vida;
}

void Enemigo::setvida(float vida) {
    this->vida = vida;
}


std::string Enemigo::getnombre() const {
    return nombre;
}

void Enemigo::setnombre(std::string nombre) {
    this->nombre = nombre;
}