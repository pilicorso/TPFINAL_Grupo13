#include "cPiloto.h"

using namespace std;

cPiloto::cPiloto(string _nombre, string _apellido, int _DNI, int _codigoempleado) :cPersonal(_nombre, _apellido, _DNI, _codigoempleado) {

}

string cPiloto::to_string() {
	return this->nombre + "" + this->apellido + "" + std::to_string(this->DNI) + "" + std::to_string(this->codigoempleado) + "";
}

void cPiloto::Imprimir() {
	cout << to_string() << endl;
}