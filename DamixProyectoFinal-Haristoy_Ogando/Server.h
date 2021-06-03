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
class Server
{
	Servicio** Catalogo;
	Servicio** Catalogo_FREE;
	int Usuario_por_Dia[7];

public:
	Server();
	void Cambio_Dia();
	void FinalizarSemana(Cliente* cliente);
	void IniciarSemana();
	~Server();
};

