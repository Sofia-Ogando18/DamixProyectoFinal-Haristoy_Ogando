#include "Hora_y_Fecha.h"
string fecha_to_string(tm fecha) {
	string auxFecha;
	auxFecha = to_string(fecha.tm_mday) + " / " + to_string(fecha.tm_mon) + " / " + to_string(fecha.tm_year);
	return auxFecha;
};
