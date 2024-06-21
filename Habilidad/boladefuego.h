//
// Created by Asus ROG on 20/06/2024.
//

#ifndef EXAMENPOO_BOLADEFUEGO_H
#define EXAMENPOO_BOLADEFUEGO_H
#include "habilidad.h"

class boladefuego : public habilidad{
public:
    boladefuego();  //Constructor implicito.

    boladefuego(float costo, int dano); //Constructor explicito.

    ~boladefuego(); //Destructor.

    //Getters
    int GetDano() const;

    //Setters
    void SetDano(int new_dano);

    //Funcion
    void Usar() override;

private:
    int dano;
};


#endif //EXAMENPOO_BOLADEFUEGO_H
