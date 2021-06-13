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
   this-> Opcion = n;
   Opcion_Menu(n);
};
void Servicio::Opcion_Menu(int opc) {
 
    switch (opc)
    {
    case 1:
        Video::ImprimirMenu_Video;
     case 2:
        Musica::ImprimirMenu_Musica;
     case 3:
         Juegos::ImprimirMenu_Juegos;
     case 4:
         break;
    default:
        break;
    }


}
Servicio::Servicio()
{
}
//void Servicio::ImprimirMenu_Video() {
//    int m;
//    cout << "\n ------Elija una opcion------\n\n";
//    cout << "1  Ver lista de titulos disponibles\n";
//    cout << "2  ver mis favoritos\n";
//    cout << "3  descargas \n"; //en el switch ver si es basic o premium si es free no  puede descargar
//    cout << "6  Salir\n\n";
//    cin >> m;
//    //this->Opcion = m;
//}; //cambiar
Servicio::~Servicio() {};
void Servicio::TipodeUsuarios()
{
    string auxp = "/n la cuenta PREMIUM cuesta $200(ARG) al mes y tiene acceso a toda la plataforma ilimitadamente con estrenos exclusivos que podes descargar y mirarlos cuando quieras ";
    string auxb = "/n la cuenta BASIC cuesta $150(ARG) al mes con acceso a toda la plataforma por 8 horas todos los dias ";
    string auxf = "/n la cuenta FREE todos los dias tiene una lista de titulos nuevos y un acceso diario de 8 horas";
    cout << auxp + auxb + auxf;
};