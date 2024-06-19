#ifndef POO_ENEMIGO_H
#define POO_ENEMIGO_H
#include <iostream>
class Enemigo {
public:
    virtual ~Enemigo();
    Enemigo(const std::string &nombre, int danio, float vida);
    Enemigo();
    virtual void recibirDanio();

    std::string getnombre ()const;
    void setnombre(const std::string nombre);
    int getdanio() const;
    void setdanio(int danio);

    float getvida() const;
    void setvida(float vida);



private:
    int danio;
    float vida;
    std::string nombre;
};

#endif //POO_ENEMIGO_H
