//
// Created by Asus ROG on 20/06/2024.
//

#include "Jugador.h"

//Constructor implicito.
Jugador::Jugador(): inventario(), Personaje() {

}

//Constructor explicito.S
Jugador::Jugador(std::string nombre, float salud, float danio, float mana): Personaje(nombre,salud,danio,mana), inventario(){

}

//Destructor.
Jugador::~Jugador() {
    std::cout<<"Jugador "<< GetNombre() << " ha sido eliminado."<<std::endl;
}

//Metodos extra.
void Jugador::mostrarInformacion() {
    std::cout<<"Datos del jugador:"<<std::endl;
    std::cout<<"Nombre: "<< GetNombre() <<std::endl;
    std::cout<<"Salud: "<< GetSalud() <<std::endl;
    std::cout<<"Danio: "<< GetDanio() <<std::endl;
    std::cout<<"Mana: "<< GetMana() <<std::endl<<std::endl;

    mostrar();
}

void Jugador:: agregarhabilidad(habilidad* Habilidad){
    habilidades.push_back(Habilidad);
    std::cout<<"Nueva habilidad."<<std::endl;
}

void Jugador:: usarHabilidad(habilidad* Habilidad){
    for (habilidad* h : habilidades){
        if(h == Habilidad){
            Habilidad->Usar();
        }
    }
}


