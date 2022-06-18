#include "cPersonal.h"

using namespace std;

cPersonal::cPersonal(string _nombre, string _apellido, int _DNI, int _codigoempleado) :cPersona(_nombre, _apellido, _DNI) {
	this->codigoempleado = _codigoempleado;
}


