//
// Created by Asus ROG on 20/06/2024.
//

#ifndef EXAMENPOO_PERSONAJE_H
#define EXAMENPOO_PERSONAJE_H
#include "Entidad.h"

class Personaje : public Entidad {
public:
    Personaje(); //Constructor implicito.

    Personaje(std::string nombre, float salud, float danio, float armadura); //Constructor explicito.

    virtual ~Personaje(); //Destructor.

    //Getters
    float GetMana() const;
    float GetDanio() const;

    //Setters
    void SetMana(float new_mana);
    void SetDanio(float new_danio);

    //Metodos extra.
    void mostrarInformacion() override;

private:
    float danio;
    float mana;

};


#endif //EXAMENPOO_PERSONAJE_H
