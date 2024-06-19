
#ifndef POO_CURACION_H
#define POO_CURACION_H


#include "Habilidad.h"

class Curacion : public Habilidad {
public:
    Curacion();
    void usarHabilidad() override;
    ~Curacion();
};

#endif //POO_CURACION_H
