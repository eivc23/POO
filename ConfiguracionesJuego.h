#ifndef POO_CONFIGURACIONESJUEGO_H
#define POO_CONFIGURACIONESJUEGO_H

#include <iostream>

class ConfiguracionesJuego {
private:
    int resolucion;
    int volumen;
    std::string dificultad;

public:
    ConfiguracionesJuego();

    ConfiguracionesJuego(int res, int vol, const std::string& dif);

    ~ConfiguracionesJuego();

    int getResolucion() const;
    int getVolumen() const;
    std::string getDificultad() const;

    void setResolucion(int Res);
    void setVolumen(int Vol);
    void setDificultad(const std::string& Diff);
};

#endif //POO_CONFIGURACIONESJUEGO_H
