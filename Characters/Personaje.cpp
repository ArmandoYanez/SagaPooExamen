//
// Created by Asus ROG on 20/06/2024.
//

#include "Personaje.h"

//Constructor implicito.
Personaje::Personaje(): Entidad() {
    this->danio = 0;
    this->mana = 0;
}

//Constructor explicito.S
Personaje::Personaje(std::string nombre, float salud, float danio, float mana): Entidad(nombre, salud) {
    this->danio = danio;
    this->mana = mana;
}

//Destructor.
Personaje::~Personaje() {
    std::cout<<"Personaje "<< GetNombre() << " ha sido eliminada."<<std::endl;
}

//Getters
float Personaje::GetMana() const {
    return mana;
}

float Personaje::GetDanio() const {
    return danio;
}

//Setters
void Personaje::SetMana(float new_mana) {
    this->mana = new_mana;
}

void Personaje::SetDanio(float new_danio) {
    this->danio = new_danio;
}

//Metodos extra.
void Personaje::mostrarInformacion() {
    std::cout<<"Datos del personaje:"<<std::endl;
    std::cout<<"Nombre: "<< GetNombre() <<std::endl;
    std::cout<<"Salud: "<< GetSalud() <<std::endl;
    std::cout<<"Danio: "<< danio <<std::endl;
    std::cout<<"Mana: "<< mana <<std::endl;
}