#include "Video.h"
Video::Video(string** actor) { this->Actores = actor; };
string**Video:: BuscarporActor(Cliente* cliente) {};
void Video::Descargar(Cliente* cliente) {};
void Video:: Recibir_Rating(int puntos, Cliente* cliente) {};
void Video:: Subtitulos(bool opcion, Cliente* cliente) {}
void Video::ImprimirMenu_Video()
{
    int m;
    cout << "\n ------Elija una opcion------\n\n";
    cout << "1  Ver lista de titulos disponibles\n";
    cout << "2  ver mis favoritos\n";
    cout << "3  descargas \n"; //en el switch ver si es basic o premium si es free no  puede descargar
    cout << "6  Salir\n\n";
    cin >> m;
    
    Menu_Video(m);
}
;
void Video::Menu_Video(int opcion) {



};
/*void Video::ImprimirMenu_Video() {
    int m;
    cout << "\n ------Elija una opcion------\n\n";
    cout << "1  Ver lista de titulos disponibles\n";
    cout << "2  ver mis favoritos\n";
    cout << "3  descargas \n"; //en el switch ver si es basic o premium si es free no  puede descargar
    cout << "6  Salir\n\n";
    cin >> m;
    //this->Opcion = m;
}; */
Video::~Video() {};