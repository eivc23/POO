#include "Inventario.h"
#include <algorithm>

Inventario::Inventario() {
}

Inventario::~Inventario() {
    std::cout << "Inventario eliminado" << std::endl;
}

void Inventario::addItem(Arma* arma) {
    armas.push_back(arma);
    std::cout << "Se agrego un arma al inventario." << std::endl;
}

void Inventario::addItem(Pocion* pocion) {
    pociones.push_back(pocion);
    std::cout << "Se agrego una pocion al inventario." << std::endl;
}

void Inventario::deleteItem(const std::string &item) {
    // Buscar el item en el inventario de armas
    auto itArma = std::find_if(armas.begin(), armas.end(), [&](Arma* a) { return a->getNombre() == item; });
    if (itArma != armas.end()) {
        armas.erase(itArma);
        std::cout << "Se elimino " << item << " del inventario de armas." << std::endl;
        return;
    }

    // Buscar el item en el inventario de pociones
    auto itPocion = std::find_if(pociones.begin(), pociones.end(), [&](Pocion* p) { return p->getNombre() == item; });
    if (itPocion != pociones.end()) {
        pociones.erase(itPocion);
        std::cout << "Se elimino " << item << " del inventario de pociones." << std::endl;
        return;
    }

    std::cout << "No se encontro " << item << " en el inventario." << std::endl;
}

void Inventario::mostrarItem() {
    std::cout << "Inventario de armas:" << std::endl;
    for (const auto &arma : armas) {
        std::cout << "- " << arma->getNombre() << std::endl;
    }

    std::cout << "Inventario de pociones:" << std::endl;
    for (const auto &pocion : pociones) {
        std::cout << "- " << pocion->getNombre() << std::endl;
    }
}