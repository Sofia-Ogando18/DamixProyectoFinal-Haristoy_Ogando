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
public:
    void Cambiar_Dificultad(int dificultad,Cliente* cliente);
    void Menu_juegos(int opcion);
    void Guardar(Cliente* cliente);
    void Sking(Cliente* cliente);
};

