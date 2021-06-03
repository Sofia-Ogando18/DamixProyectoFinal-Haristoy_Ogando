#include "Video.h"
Video::Video(string** actor) { this->Actores = actor; };
string**Video:: BuscarporActor(Cliente* cliente) {};
void Video::Descargar(Cliente* cliente) {};
void Video:: Recibir_Rating(int puntos, Cliente* cliente) {};
void Video:: Subtitulos(bool opcion, Cliente* cliente) {};
void Video::Menu_Video(int opcion) {};
void Video::ImprimirMenu_Video() {
    int m;
    cout << "\n ------Elija una opcion------\n\n";
    cout << "1  Ingresos\n";
    cout << "2  Modificacion\n";
    cout << "3  Consultas\n";
    cout << "4  Reportes\n";
    cout << "5  Utilidades\n";
    cout << "6  Salir\n\n";

}; //cambiar
Video::~Video() {};