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
int  Servicio::Imprimir_Menu() {
    int n;
    cout << "\n -----Que queres hacer hoy-----\n\n";
    cout << "1  Ver videos \n";
    cout << "2  Escuchar musica\n";
    cout << "2  jugar juegos\n";
    cout << "6  Salir\n\n";
    cin >> n;
    Opcion = n;
    return Opcion;
};
void Servicio::Opcion_Menu() {
    switch (Opcion)
    {
    case 1:
        ImprimirMenu_Video();
     case 2:
    default:
        break;
    }


};
Servicio::~Servicio() {};
