#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <iostream>
#include <sstream>
#include <time.h>
using namespace std;
string fecha_to_string(tm fecha);
enum class TipoUsuarios { Premium, Free,Basic }; typedef TipoUsuarios tipousuarios;
string TipoUsuario_to_string(TipoUsuarios usuario){
	switch (usuario)
	{
	case TipoUsuarios::Premium:
		return "Premium";
		break;
	case TipoUsuarios::Free:
		return "Free";
		break;
	case TipoUsuarios::Basic:
		return "free";
		break;
	default:
		break;
	}

};

