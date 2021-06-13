#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
#include <time.h>
#include "Hora_y_Fecha.h"
//#include"EstadisticaCliente.h"
#include "Estadistica.h"
#include "Servicio.h"
#include "Usuarios.h"
using namespace std;
class Cliente
{
	bool Actividad;
	string Pais;
	Estadistica* Informacion_Prom;
	Estadistica* Informacion_sem;
	Servicio* Actual;
	string Usuario;
	string Contrasenia;
	tm Inicio;
	TipoUsuarios TipoCuenta;
public:
	Cliente();
	int CalcularT_Activo();
	void Dejar_Servicio();
	string GetInformacion();
	string GetUsuario();
	Servicio* Sorprendeme(TipoUsuarios usuario);
	void UsarServicio(Servicio* plataforma);
	~Cliente();


};

