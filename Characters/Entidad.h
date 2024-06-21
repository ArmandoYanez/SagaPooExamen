//
// Created by Armando on 19/06/2024.
//

#ifndef EXAMENPOO_ENTIDAD_H
#define EXAMENPOO_ENTIDAD_H
#include "iostream"

class Entidad {
public:
    Entidad(); //Constructor implicito.

    Entidad(std::string nombre, float salud); //Constructor explicito.

    virtual ~Entidad(); //Destructor.

    //Getters
    std::string GetNombre() const;
    float GetSalud() const;

    //Setters
    void SetNombre(std::string new_nombre);
    void SetSalud(float new_vida);

    //Metodos extra.
    virtual void mostrarInformacion();

private:
    std::string nombre;
    float salud;
};


#endif //EXAMENPOO_ENTIDAD_H
