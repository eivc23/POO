#ifndef POO_INVENTARIO_H
#define POO_INVENTARIO_H

#include <iostream>
#include <vector>
#include <string>
#include "Arma.h"
#include "Pocion.h"

class Inventario {
public:
    Inventario();
    virtual ~Inventario();

    void addItem(Arma* arma);
    void addItem(Pocion* pocion);
    void deleteItem(const std::string &item);
    void mostrarItem();

private:
    std::vector<Arma*> armas;
    std::vector<Pocion*> pociones;
};

#endif // POO_INVENTARIO_H
