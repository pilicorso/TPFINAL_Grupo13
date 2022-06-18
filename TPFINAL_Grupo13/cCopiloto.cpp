#include "cCopiloto.h"
using namespace std;

cCopiloto::cCopiloto(string _nombre, string _apellido, int _DNI, int _codigoempleado) :cPiloto(_nombre, _apellido, _DNI, _codigoempleado) {

}

string cCopiloto::to_string() {
	return this->nombre + "" + this->apellido + "" + std::to_string(this->DNI) + "" + std::to_string(this->codigoempleado) + "";
}

void cCopiloto::Imprimir() {
	cout << to_string() << endl;
}