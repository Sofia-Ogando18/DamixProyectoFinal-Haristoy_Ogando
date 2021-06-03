#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Servicio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <time.h>
using namespace std;
class Musica :
    public Servicio
{
public:
    Musica();
    void Descargar(Cliente* cliente);
    void Filtro(string filtro, Cliente* Cliente);
    void Menu_Musica(int opcion);
    ~Musica();

};

