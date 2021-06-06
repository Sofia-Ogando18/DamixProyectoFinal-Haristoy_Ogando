#pragma once
#include "Servicio.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <time.h>
using namespace std;
class Juegos :
    public Servicio
{
    int PuntuacionMax;
    int Opcion;
public:
    Juegos();
    void Cambiar_Dificultad(int dificultad,Cliente* cliente);
    void Menu_juegos(int opcion);
    void ImprimirMenu_Juegos();
    void Guardar(Cliente* cliente);
    void Jugar_tres_En_Raya();//programar el juego
    void Instrucciones_3enRayas();
    void Sking(Cliente* cliente);
    void jugarPong();//programar el juego
    void InstruccionesPong();
    ~Juegos();
};

