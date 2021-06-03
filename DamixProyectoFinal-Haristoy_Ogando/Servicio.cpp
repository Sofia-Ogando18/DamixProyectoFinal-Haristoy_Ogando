#include "Servicio.h"
/*string tags*/
Servicio::Servicio(tm hoy, string nombre, float rating) {
	this->Dia_Actual = hoy;
	this->Nombre = nombre;
	this->Rating = rating;
	//this->Tags = tags;
};
void Servicio:: Apagar(Cliente* cliente){};
void Servicio::Iniciar(Cliente* cliente) {};
void Servicio:: Pausar(Cliente* cliente) {};
void Servicio:: Recibir_Rating(int rating, Cliente* cliente) {};
Servicio::~Servicio() {};
