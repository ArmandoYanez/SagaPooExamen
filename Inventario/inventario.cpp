//
// Created by Asus ROG on 20/06/2024.
//

#include "inventario.h"
#include <algorithm>

inventario::inventario() {

}

// Constructor por parametros
inventario::inventario(std::vector<item*> conjuntoItems) {
    this->conjuntoItems = conjuntoItems;
}

//metodo añadir armas o pocion
void inventario::anadir(item* newItem) {
    conjuntoItems.push_back(newItem);
    std::cout<<"Nuevo item agregado."<<std::endl;
}

void inventario::mostrar() {
    std::cout<<"Items disponibles: "<<std::endl;
    for (item* itemc : conjuntoItems){
        std::cout<<itemc->GetNombre()<<std::endl;
    }
}

void inventario::eliminar(std::string itemAEliminar) {

    auto iterador2 = std::find_if(conjuntoItems.begin(), conjuntoItems.end(),
                                  [&itemAEliminar](item* item) {
                                      return item->GetNombre() == itemAEliminar;
                                  });

    if(iterador2 != conjuntoItems.end()){
        std::cout << "Item " << (*iterador2)->GetNombre() << " eliminado" << std::endl;
        conjuntoItems.erase(iterador2);
    }else {
        std::cout << "Item no encontrado." << std::endl;
    }
}

//Funciones para destruir
inventario::~inventario(){
    std::cout<<"Inventario eliminado."<<std::endl;
}