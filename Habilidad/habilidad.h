//
// Created by Asus ROG on 20/06/2024.
//

#ifndef EXAMENPOO_HABILIDAD_H
#define EXAMENPOO_HABILIDAD_H


class habilidad {
public:
    habilidad(); //Constructor implicito.

    habilidad(float nivel); //Constructor explicito.

    virtual ~habilidad();   //Destructor.

    //Getters
    float GetCosto() const;

    //Setters
    void SetCosto(float new_costo);

    //Funcion
    virtual void Usar();

private:
    float costo;
};


#endif //EXAMENPOO_HABILIDAD_H
