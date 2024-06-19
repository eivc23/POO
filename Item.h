#ifndef POO_ITEM_H
#define POO_ITEM_H

#include <iostream>

class Item {
public:
    Item();
    Item(const std::string& nombre);
    virtual ~Item();
    virtual std::string getNombre() const;
    virtual void usarItem();

private:
    std::string nombre;

};


#endif //POO_ITEM_H
