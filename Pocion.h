
#ifndef POO_POCION_H
#define POO_POCION_H

#include "Item.h"

class Pocion : public Item {
public:
    Pocion(const std::string& nombre, int efecto);
    int getEfecto() const;
    void setEfecto(int);
    Pocion();
    virtual ~Pocion();

    void usarItem() override;

private:
    std::string nombre;
    int efecto;


};

#endif //POO_POCION_H
