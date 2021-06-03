#include "Juegos.h"
Juegos::Juegos() {};
int Juegos::ImprimirMenu_Juegos() {
    int n;
    cout << "\n ------Elija una opcion------\n\n";
    cout << "1  Ingresos\n";
    cout << "2  Modificacion\n";
    cout << "3  Consultas\n";
    cout << "4  Reportes\n";
    cout << "5  Utilidades\n";
    cout << "6  Salir\n\n";
    cin >> n;
    return n;

}; //cambiar
void Juegos::Cambiar_Dificultad(int dificultad, Cliente* cliente) {};
void Juegos:: Menu_juegos(int opcion) {};
void Juegos::Guardar(Cliente* cliente) {};
void Juegos::Sking(Cliente* cliente) {};
Juegos::~Juegos() {};