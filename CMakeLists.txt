cmake_minimum_required(VERSION 3.26.4)
project(ExamenPoo)

set(CMAKE_CXX_STANDARD 17)

add_executable(ExamenPoo main.cpp
        Characters/Entidad.cpp
        Characters/Entidad.h
        Characters/Enemigo.cpp
        Characters/Enemigo.h
        Characters/Personaje.h
        Characters/Personaje.cpp
        Characters/Jugador.h
        Characters/Jugador.cpp
        Inventario/item.h
        Inventario/item.cpp
        Inventario/inventario.h
        Inventario/inventario.cpp
        Habilidad/habilidad.h
        Habilidad/habilidad.cpp
        Habilidad/boladefuego.h
        Habilidad/boladefuego.cpp
        Habilidad/curar.h
        Habilidad/curar.cpp)
