#include "Mago.h"

Mago::Mago()  {
    this->TipoMagia = "N/A";
    this->usaVarita = true;
}

Mago::Mago(const std::string &nombre, int edad, int vida, float peso, const std::string &TipoMagia, bool usaVarita)
        : PersonajeV(nombre, edad, vida, peso), TipoMagia(TipoMagia), usaVarita(usaVarita) {
}

Mago::~Mago() {
    std::cout << "El mago se volvio polvos magicos" << std::endl;
}

void Mago::ataque(Enemigo* enemigo) {
    std::cout << "El mago ataca con magia" << std::endl;
}
bool Mago::getusaVarita() {
    return usaVarita;
}

void Mago::setusaVarita(bool usaVarita) {
    this->usaVarita = usaVarita;
}

std::string Mago::getTipoMagia() const {
    return TipoMagia;
}


void Mago::setTipoMagia(std::string TipoMagia) {
    this->TipoMagia = TipoMagia;
}
