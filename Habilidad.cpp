
#include "Habilidad.h"
#include <algorithm>

Habilidad::~Habilidad() {
    std::cout << "Habilidad eliminada" << std::endl;
}

Habilidad::Habilidad() {
}

void Habilidad::usarHabilidad() {
    std::cout << "Usando habilidad" << std::endl;
}

void Habilidad::addHabilidad(const std::string& habilidad) {
    habilidades.push_back(habilidad);
    std::cout << "Habilidad agregada: " << habilidad << std::endl;
}

void Habilidad::deleteHabilidad(const std::string& habilidad) {
    auto it = std::find(habilidades.begin(), habilidades.end(), habilidad);
    if (it != habilidades.end()) {
        habilidades.erase(it);
        std::cout << "Se eliminó la habilidad: " << habilidad << std::endl;
    } else {
        std::cout << "No se encontró la habilidad: " << habilidad << std::endl;
    }
}

void Habilidad::mostrarHabilidad() {
    std::cout << "Las habilidades son: " << std::endl;
    for (const std::string& habilidad : habilidades) {
        std::cout << "- " << habilidad << std::endl;
    }
}

