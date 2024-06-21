//
// Created by Asus ROG on 20/06/2024.
//

#include "habilidad.h"
#include <iostream>

// Contructor default
habilidad::habilidad(){
    this->costo = 0;
}

// Constructor por parametros
habilidad::habilidad(float costo) {
    this->costo = costo;
}

//Funciones para destruir
habilidad::~habilidad(){
    std::cout<<"Habilidad eliminada"<<std::endl;
}

//Getters
float habilidad::GetCosto() const{
    return costo;
}

//Setters
void habilidad::SetCosto(float new_costo){
    this -> costo = new_costo;
}

//Metodos extra
void habilidad::Usar() {
    std::cout<<"Se uso habilidad."<<std::endl;
}

