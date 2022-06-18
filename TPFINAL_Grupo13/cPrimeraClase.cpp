#include "cPrimeraClase.h"

using namespace std;

cPrimeraClase::cPrimeraClase(string _nombre, string _apellido, int _DNI, string _codigo) :cPasajero(_nombre, _apellido, _DNI, _codigo) {

}

bool cPrimeraClase::esprimeraclase() {
	return true;
}

void cPrimeraClase::TrabajarNotebook() {
	cout << "Esta trabajando con la notebook" << endl;
}
void cPrimeraClase::Imprimir() {
	cout << to_string() << endl;
}