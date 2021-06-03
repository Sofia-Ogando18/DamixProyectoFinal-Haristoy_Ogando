#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <time.h>
#include "Cliente.h"
using namespace std;
class Servicio
{
	int Dia_Actual;
	string Nombre;
	float Rating;
	string* Tags[10];
public:
	Servicio();
	void Apagar(Cliente* cliente);
	void Iniciar(Cliente* cliente);
	void Pausar(Cliente* cliente);
	void Recibir_Rating(int rating, Cliente* cliente);
	~Servicio();


};

