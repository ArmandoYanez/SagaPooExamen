//
// Created by Armando on 19/06/2024.
//

#ifndef EXAMENPOO_ENEMIGO_H
#define EXAMENPOO_ENEMIGO_H
#include "Entidad.h"

class Enemigo : public Entidad {
public:
    Enemigo(); //Constructor implicito.

    Enemigo(std::string nombre, float salud,float danio, float armadura); //Constructor explicito.

    ~Enemigo(); //Destructor.

    //Getters
    float GetArmadura() const;
    float GetDanio() const;

    //Setters
    void SetArmadura(float new_armadura);
    void SetDanio(float new_danio);

    //Metodos extra.
    void mostrarInformacion() override;

private:
    float danio;
    float armadura;
};


#endif //EXAMENPOO_ENEMIGO_H
