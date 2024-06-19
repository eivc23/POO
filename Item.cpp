
#include "Item.h"

Item::Item() {
}

Item::~Item() {
}

void Item::usarItem() {
    std::cout<<"Haz usado un item"<<std::endl;

}

Item::Item(const std::string& nombre) : nombre(nombre) {}


std::string Item::getNombre() const {
    return nombre;
}