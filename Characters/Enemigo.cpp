//
// Created by Armando on 19/06/2024.
//

#include "Enemigo.h"

//Constructor implicito.
Enemigo::Enemigo():Entidad() {
    this->danio = 0;
    this->armadura = 0;
}

//Constructor explicito.
Enemigo::Enemigo(std::string nombre, float salud,float danio, float armadura):Entidad(nombre,salud) {
    this->danio = danio;
    this->armadura = armadura;
}

//Destructor.
Enemigo::~Enemigo() {
    std::cout<<"Enemigo "<< GetNombre() << " ha sido eliminada."<<std::endl;
}

//Getters
float Enemigo::GetArmadura() const {
    return armadura;
}

float Enemigo::GetDanio() const {
    return danio;
}

//Setters
void Enemigo::SetArmadura(float new_armadura) {
    this->armadura = new_armadura;
}

void Enemigo::SetDanio(float new_danio) {
    this->danio = new_danio;
}

//Metodos extra.
void Enemigo::mostrarInformacion() {
    std::cout<<"Datos del enemigo:"<<std::endl;
    std::cout<<"Nombre: "<< GetNombre() <<std::endl;
    std::cout<<"Salud: "<< GetSalud() <<std::endl;
    std::cout<<"Danio: "<< danio <<std::endl;
    std::cout<<"Armadura: "<< armadura <<std::endl;
}