//
// Created by Asus ROG on 20/06/2024.
//

#include "curar.h"
#include <iostream>

// Contructor default
curar::curar(){
    this->cura = 0;
}

// Constructor por parametros
curar::curar(float costo, int dano) : habilidad(costo) {
    this->cura = dano;
}

//Getters
int curar::GetCura() const{
    return cura;
}

//Setters
void curar::SetCura(int new_cura){
    this -> cura = new_cura;
}

//Funciones presentarse
void curar::Usar() {
    std::cout<<"Se uso la cura."<<std::endl;
}

//Funciones para destruir
curar::~curar(){
    std::cout<<"Cura eliminada"<<std::endl;
}