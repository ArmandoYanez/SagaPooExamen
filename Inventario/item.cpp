//
// Created by Asus ROG on 20/06/2024.
//

#include "item.h"

//Constructor implicito.
item::item() {
    this->nombre = "N/A";
    this->tipo = "N/A";
}

//Constructor explicito.
item::item(std::string nombre, std::string tipo) {
    this->nombre = nombre;
    this->tipo = tipo;
}

//Destructor.
item::~item() {
    std::cout<<nombre << " ha sido eliminado."<<std::endl;
}

//Getters
std::string item::GetNombre() const {
    return nombre;
}

std::string item::GetTipo() const {
    return tipo;
}

//Setters
void item::SetNombre(std::string new_nombre) {
    this->nombre = new_nombre;
}

void item::SetTipo(std::string new_tipo) {
    this->tipo = new_tipo;
}

//Metodos extra.
void item::Usar() {
    std::cout<<nombre << " ha sido utilizado."<<std::endl;
    delete this;
}