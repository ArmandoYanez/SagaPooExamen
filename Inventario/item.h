//
// Created by Asus ROG on 20/06/2024.
//

#ifndef EXAMENPOO_ITEM_H
#define EXAMENPOO_ITEM_H
#include "iostream"

class item {
public:
    item(); //Constructor implicito.

    item(std::string nombre, std::string tipo);  //Constructor explicito.

    ~item(); //Destructor.

    //Getters
    std::string GetNombre() const;
    std::string GetTipo() const;


    //Setters
    void SetNombre(std::string new_nombre);
    void SetTipo(std::string new_tipo);

    //Metodos
    void Usar();

private:
    std::string nombre;
    std::string tipo;
};


#endif //EXAMENPOO_ITEM_H
