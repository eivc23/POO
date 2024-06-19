#include <iostream>
#include "Guerrero.h"
#include "Mago.h"
#include "Duende.h"
#include "Orco.h"
#include "Bola_Fuego.h"
#include "Curacion.h"
#include "Arma.h"
#include "Pocion.h"
#include "Inventario.h"
#include "ConfiguracionesJuego.h"

int main() {

    ConfiguracionesJuego configuraciones;
    configuraciones.setResolucion(1920 );
    configuraciones.setVolumen(80);
    configuraciones.setDificultad("Dificil");

    std::cout << "Configuracion del juego:" << std::endl;
    std::cout << "Resolucion: " << configuraciones.getResolucion() << std::endl;
    std::cout << "Volumen:" << configuraciones.getVolumen() << std::endl;
    std::cout << "Dificultad: " << configuraciones.getDificultad() << std::endl;

    Guerrero* guerrero = new Guerrero("Shawn", 30, 100, 75.5, "Samurai", true);
    Mago* mago = new Mago("Hunter", 25, 80, 60.0, "Cosmica", true);

    Duende* duende = new Duende("Goag", 15, 100.0f, 50.0f, 60);
    Orco* orco = new Orco("Sus", 25, 100.0f, 120, 100.0);

    std::cout << "Detalles de los personajes y enemigos:" << std::endl;
    std::cout << "Guerrero: " << guerrero->getnombre() << ", Edad: " << guerrero->getedad()
              << ", Vida: " << guerrero->getvida() << ", Peso: " << guerrero->getpeso()
              << ", Tipo: " << guerrero->getTipoArmadura() << (guerrero->getusaEspada() ? "Si" : "No" )
              << std::endl;
    std::cout << "Mago: " << mago->getnombre() << ", Edad: " << mago->getedad()
              << ", Vida: " << mago->getvida() << ", Peso: " << mago->getpeso()
              << ", Tipo: " << mago->getTipoMagia() << ", Varita: " << (mago->getusaVarita() ? "Si" : "No")
              << std::endl;
    std::cout << "Duende: Nombre: " << duende->getnombre()
              << ", Vida: " << duende->getvida() << ", Magia: " << duende->getMagia()
              << ", Sigilo: " << duende->getAgilidad() << std::endl;
    std::cout << "Orco: Nombre: " << orco->getnombre() << ", Vida: " << orco->getvida() << ", Peso: " << orco->getResistencia()
              << ", Fuerza: " << orco->getFuerza() << std::endl;
    Habilidad* bolaDeFuego = new Bola_Fuego();
    Habilidad* curacion = new Curacion();

    guerrero->addHabilidad(bolaDeFuego);
    mago->addHabilidad(curacion);

    Inventario inventario;
    Arma* espada = new Arma("Espada", 50);
    Pocion* pocion = new Pocion("Vida", 10);
    inventario.addItem(espada);
    inventario.addItem(pocion);

    delete guerrero;
    delete mago;
    delete duende;
    delete orco;
    delete bolaDeFuego;
    delete curacion;
    delete espada;
    delete pocion;

    std::cout << "Fin del juego." << std::endl;

    return 0;
}
