//
// Created by Asus ROG on 20/06/2024.
//

#include "boladefuego.h"
#include <iostream>

// Contructor default
boladefuego::boladefuego(){
    this->dano = 0;
}

// Constructor por parametros
boladefuego::boladefuego(float costo, int dano) : habilidad(costo) {
    this->dano = dano;
}

//Getters
int boladefuego::GetDano() const{
    return dano;
}

//Setters
void boladefuego::SetDano(int new_dano){
    this -> dano = new_dano;
}

//Funciones presentarse
void boladefuego::Usar() {
    std::cout<<"Se uso la bola de fuego."<<std::endl;
}

//Funciones para destruir
boladefuego::~boladefuego(){
    std::cout<<"Bola de fuego eliminada"<<std::endl;
}