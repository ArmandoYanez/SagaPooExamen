//
// Created by Asus ROG on 20/06/2024.
//

#ifndef EXAMENPOO_CURAR_H
#define EXAMENPOO_CURAR_H
#include "habilidad.h"

class curar : public habilidad{
public:
    curar();  //Constructor implicito.

    curar(float costo, int cura); //Constructor explicito.

    ~curar(); //Destructor.

    //Getters
    int GetCura() const;

    //Setters
    void SetCura(int new_cura);

    //Funcion
    void Usar() override;

private:
    int cura;
};


#endif //EXAMENPOO_CURAR_H
