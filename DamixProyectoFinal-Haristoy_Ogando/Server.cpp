#include "Server.h"
Server::Server() {};
void Server::Cambio_Dia() {};
void Server::FinalizarSemana(Cliente* cliente) {}
void Server::TipodeServicios()
{
	string auxp = "/n la cuenta PREMIUM cuesta $200(ARG) al mes y tiene acceso a toda la plataforma ilimitadamente con estrenos exclusivos que podes descargar y mirarlos cuando quieras ";
	string auxb = "/n la cuenta BASIC cuesta $150(ARG) al mes con acceso a toda la plataforma por 8 horas todos los dias ";
string auxf = "/n la cuenta FREE todos los dias tiene una lista de titulos nuevos y un acceso diario de 8 horas";
cout << auxp + auxb + auxf;
};
void Server::IniciarSemana() {};
Server::~Server() {};