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
void Servicio::Imprimir_Menu() {
    int n;
    cout << "\n -----Que queres hacer hoy-----\n\n";
    cout << "1  Ver videos \n";
    cout << "2  Escuchar musica\n";
    cout << "3  jugar juegos\n";
    cout << "4  Salir\n\n";
    cin >> n;
    Opcion = n;

};
void Servicio::Opcion_Menu() {
 
    switch (Opcion)
    {
    case 1:
       ImprimirMenu_Video();
     case 2:
         ImprimirMenu_Musica();
     case 3:
         ImprimirMenu_Juegos();
     case 4:
         break;
    default:
        break;
    }


}
Servicio::Servicio()
{
}
;
Servicio::~Servicio() {};
