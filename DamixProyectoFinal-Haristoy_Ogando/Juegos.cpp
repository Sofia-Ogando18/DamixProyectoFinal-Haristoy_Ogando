#include "Juegos.h"
Juegos::Juegos() {};
void Juegos::ImprimirMenu_Juegos() {
    int n;
    cout << "\n ------Elija el juego que quiere jugar-----\n\n";
    cout << "1  jugar 3 en raya \n";
    cout << "2  jugar pong \n";
    cout << "6  Salir\n\n";
    cin >> n;
    Opcion = n;

}; //cambiar
void Juegos::Cambiar_Dificultad(int dificultad, Cliente* cliente) {};
void Juegos:: Menu_juegos(int opcion) {
    switch (opcion)
    {
    case 1:
        Jugar_tres_En_Raya();
    case 2:
        jugarPong();

    case 6:
        break;

    default:
        break;
    }

};
void Juegos::Guardar(Cliente* cliente) {};
void Juegos::Sking(Cliente* cliente) {};
void Juegos::Instrucciones_3enRayas() {


};
void Juegos::Jugar_tres_En_Raya() {
    Instrucciones_3enRayas();

};
void Juegos::jugarPong() {};
void Juegos::InstruccionesPong() {};
Juegos::~Juegos() {};