#include "PersonajeV.h"
#include <iostream>


PersonajeV::PersonajeV() {
    this->nombre = "N/A";
    this->edad = 0;
    this->vida = 0.0f;
    this->peso = 0.0f;
}

PersonajeV::PersonajeV(const std::string &nombre, int edad, int vida, float peso) : nombre(nombre), edad(edad), vida(vida), peso(peso) {}

PersonajeV::~PersonajeV() {
    std::cout << "El personaje ha fallecido" << std::endl;
}

void PersonajeV::ataque(Enemigo* enemigo) {
    std::cout << "El personaje " << nombre << " ataca al enemigo " << enemigo->getnombre() << std::endl;
}
int PersonajeV::getedad()  {
    return edad;
}

void PersonajeV::setedad(int edad) {
    this->edad = edad;
}

int PersonajeV::getvida() {
    return vida;
}

void PersonajeV::setvida(int vida) {
    this->vida = vida;
}

float PersonajeV::getpeso() {
    return peso;
}

void PersonajeV::setpeso(float peso) {
    this->peso = peso;
}

std::string PersonajeV::getnombre() const {
    return nombre;
}


void PersonajeV::setnombre(std::string nombre) {
    this->nombre = nombre;
}
void PersonajeV::addHabilidad(Habilidad* habilidad) {
    habilidades.push_back(habilidad);
}

void PersonajeV::usarHabilidades() {
    std::cout << "Usando habilidades del personaje " << nombre << ":" << std::endl;
    for (auto& habilidad : habilidades) {
        habilidad->usarHabilidad(); // Llama al método usar() de cada habilidad
    }
}