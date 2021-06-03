#include "Video.h"
Video::Video(string** actor) { this->Actores = actor; };
string**Video:: BuscarporActor(Cliente* cliente) {};
void Video::Descargar(Cliente* cliente) {};
void Video:: Recibir_Rating(int puntos, Cliente* cliente) {};
void Video:: Subtitulos(bool opcion, Cliente* cliente) {};
void Video::Menu_Video(int opcion) {};
Video::~Video() {};