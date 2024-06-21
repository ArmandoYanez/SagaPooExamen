//
// Created by Armando on 19/06/2024.
//

#include "Entidad.h"

//Constructor implicito.
Entidad::Entidad() {
    this->nombre = "N/A";
    this->salud = 0;
}

//Constructor explicito.
Entidad::Entidad(std::string nombre, float salud) {
    this->nombre = nombre;
    this->salud = salud;
}

//Destructor.
Entidad::~Entidad() {

}

//Getters
std::string Entidad::GetNombre() const {
    return nombre;
}

float Entidad::GetSalud() const {
    return salud;
}

//Setters
void Entidad::SetNombre(std::string new_nombre) {
    this->nombre = new_nombre;
}

void Entidad::SetSalud(float new_salud) {
    this->nombre = new_salud;
}

//Metodos extra.
void Entidad::mostrarInformacion() {
    std::cout<<"Datos de la entidad:"<<std::endl;
    std::cout<<"Nombre: "<< nombre <<std::endl;
    std::cout<<"Salud: "<< salud <<std::endl;
}