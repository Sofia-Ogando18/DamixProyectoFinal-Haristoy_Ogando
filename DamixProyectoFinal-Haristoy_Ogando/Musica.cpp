#include "Musica.h"
Musica::Musica() {};
void Musica::Descargar(Cliente* cliente) {};
void Musica::Filtro(string filtro, Cliente* Cliente) {};
void Musica::Menu_Musica(int opcion) {};
void Musica:: ImprimirMenu_Musica() {
    int m;
    cout << "\n ------Elija una opcion------\n\n";
    cout << "1  Ingresos\n";
    cout << "2  Modificacion\n";
    cout << "3  Consultas\n";
    cout << "4  Reportes\n";
    cout << "5  Utilidades\n";
    cout << "6  Salir\n\n";

}; //cambiar
Musica::~Musica() {};