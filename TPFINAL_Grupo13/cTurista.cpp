#include "cTurista.h"

using namespace std;

cTurista::cTurista(string _nombre, string _apellido, int _DNI, string _codigo) :cPasajero(_nombre, _apellido, _DNI, _codigo) {

}

void cTurista::Imprimir() {
	cout << to_string() << endl;
}