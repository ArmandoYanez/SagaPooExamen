//
// Created by Asus ROG on 20/06/2024.
//

#ifndef EXAMENPOO_JUGADOR_H
#define EXAMENPOO_JUGADOR_H
#include "Personaje.h"
#include "../Inventario/inventario.h"
#include "../Habilidad/habilidad.h"

class Jugador : public Personaje, public inventario{
public:
    Jugador(); //Constructor implicito.

    Jugador(std::string nombre, float salud, float danio, float armadura); //Constructor explicito.

    ~Jugador(); //Destructor.

    //Metodos extra
    virtual void mostrarInformacion();

    void agregarhabilidad(habilidad* Habilidad);

    void usarHabilidad(habilidad* Habilidad);

private:
    std::vector<habilidad*> habilidades;
};


#endif //EXAMENPOO_JUGADOR_H
