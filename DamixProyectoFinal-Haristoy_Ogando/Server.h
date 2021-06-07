#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <time.h>
#include "Lista_Servicio.h"
#include"Lista_EstadisticaSV.h"
#include "Servicio.h"
using namespace std;
class Server
{
	Lista_Servicio** Catalogo_Premium;
	Lista_Servicio** Catalogo_FREE;//cambia todos los dias
	Lista_Servicio** Catalogo_Basic;
	Lista_EstadisticaSV** DatosServ;
	Lista_EstadisticaSV** DatosServ_N;
	int Usuario_por_Dia[7];

public:
	Server();
	void Cambio_Dia();
	void FinalizarSemana(Cliente* cliente);
	void TipodeServicios();//funcion que imprime que hace cada usuario y cuanto sales
	void IniciarSemana();
	~Server();
};

