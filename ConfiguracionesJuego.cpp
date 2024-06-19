#include "ConfiguracionesJuego.h"

ConfiguracionesJuego::ConfiguracionesJuego() {
    resolucion = 1920;
    volumen = 50;
    dificultad = "Normal";
}

ConfiguracionesJuego::ConfiguracionesJuego(int res, int vol, const std::string& dif) {
    resolucion = res;
    volumen = vol;
    dificultad = dif;
}

ConfiguracionesJuego::~ConfiguracionesJuego() {
    std::cout << "La configuracion ha finalizado" << std::endl;
}

int ConfiguracionesJuego::getResolucion() const {
    return resolucion;
}

int ConfiguracionesJuego::getVolumen() const {
    return volumen;
}

std::string ConfiguracionesJuego::getDificultad() const {
    return dificultad;
}

void ConfiguracionesJuego::setResolucion(int Res) {
    resolucion = Res;
}

void ConfiguracionesJuego::setVolumen(int Vol) {
    volumen = Vol;
}

void ConfiguracionesJuego::setDificultad(const std::string& diff) {
    dificultad = diff;
}
