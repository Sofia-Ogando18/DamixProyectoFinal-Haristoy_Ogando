#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include "Servicio.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <time.h>
#include "Lista_Servicio.h"
#include "Hora_y_Fecha.h"
using namespace std;
//guarda las estadisticas de cadaa usiario y en base a eso se sacan las estadisticas del servicio
class Estadistica
{
	int Cant_Servicios;
	Lista_Servicio* Historial;
	int Minutos_Fav;
	string Usuario;
	int** MinPantalla;
	int MinTotal;
	int Minutos2;
	int Minutos3;
	int N_Semana;
	int PromDia;
	//no se que son los serv 
public:
	void Aniadir_Servicio(Servicio*plataforma);
	void TipoEstadistica();//que tipo de estadistica quiere ver (estadistica general,estadistica personal o estadistica todos los usuarios por pais)
	Estadistica();
	void Calcular_Fav();
	void TiempoActivo();
	//agregar las estadisticas de servicio
	~Estadistica();


};

