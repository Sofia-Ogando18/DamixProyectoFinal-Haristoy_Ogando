#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <time.h>
#include "Servicio.h"
using namespace std;

class Video :
    public Servicio
{
   string** Actores;
public:
    Video(string**actor);
    string** BuscarporActor(Cliente* cliente);
    void Descargar(Cliente* cliente);
    void Menu_Video(int opcion);
    void Recibir_Rating(int puntos,Cliente*cliente);
    void Subtitulos(bool opcion,Cliente*cliente);
    ~Video();
};

