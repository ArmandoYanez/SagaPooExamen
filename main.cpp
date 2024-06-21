#include <iostream>
#include "Characters/Jugador.h"
#include "Characters/Enemigo.h"
#include "Habilidad/bolaDeFuego.h"
#include "Inventario/item.h"

int main() {
    auto* jugador = new Jugador("Jugador",100,10,100);
    auto* enemigo = new Enemigo("Enemigo",10,5,50);
    auto* habilidad = new boladefuego(10,10);
    auto* objeto = new item("Espada","Arma");
    jugador->anadir(objeto);
    jugador->agregarhabilidad(habilidad);
    jugador->usarHabilidad(habilidad);
    jugador->mostrarInformacion();
    habilidad->Usar();
    enemigo->mostrarInformacion();
    delete jugador;
    delete enemigo;
    delete habilidad;
    return 0;
}