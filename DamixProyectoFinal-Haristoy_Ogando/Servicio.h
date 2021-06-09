#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <time.h>
#include "Cliente.h"
#include "Video.h"
using namespace std;
class Servicio
{
	friend class Video;
	tm Dia_Actual;
	string Nombre;
	float Rating;
	string* Tags[10];
	unsigned int Opcion;
public:
	Servicio(tm hoy, string nombre, float rating); /*string tags*/
	void Apagar(Cliente* cliente);
	void Iniciar(Cliente* cliente);
	void Pausar(Cliente* cliente);
	void Recibir_Rating(int rating, Cliente* cliente);
	void Imprimir_Menu();
	void Opcion_Menu();
	Servicio();
	~Servicio();


};

