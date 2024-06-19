#include "Guerrero.h"
Guerrero::Guerrero()  {
    this->usaEspada = true;
    this->TipoArmadura = "N/A";


}
Guerrero::Guerrero(const std::string &nombre, int edad, int vida, float peso, const std::string &TipoArmadura, bool usaEspada)
        : PersonajeV(nombre, edad, vida, peso), TipoArmadura(TipoArmadura), usaEspada(usaEspada){}


Guerrero::~Guerrero() {
    std::cout << "El guerrero ha sido enviado al otro mundo "<< std::endl;
}

void Guerrero::ataque(Enemigo* enemigo) {
    std::cout << "El guerrero ataca con su espada" << std::endl;
}

bool Guerrero::getusaEspada() {
    return usaEspada;
}

void Guerrero::setusaEspada(bool usaEspada) {
    this->usaEspada = usaEspada;
}

std::string Guerrero::getTipoArmadura() const {
    return TipoArmadura;
}

void Guerrero::setTipoArmadura(std::string TipoArmadura) {
    this->TipoArmadura = TipoArmadura;
}
