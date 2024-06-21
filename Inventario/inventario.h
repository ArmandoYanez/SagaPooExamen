//
// Created by Asus ROG on 20/06/2024.
//

#ifndef EXAMENPOO_INVENTARIO_H
#define EXAMENPOO_INVENTARIO_H
#include <vector>
#include <string>
#include "item.h"

class inventario {
public:
    inventario(); //Constructor implicito.

    inventario(std::vector<item*> conjuntoItems); //Constructor explicito.

    ~inventario();  //Destructor.

    //Metodos extra.
    void anadir(item* newItem);

    void eliminar(std::string itemAEliminar);

    void mostrar();

private:
    std::vector<item*> conjuntoItems;
};


#endif //EXAMENPOO_INVENTARIO_H
