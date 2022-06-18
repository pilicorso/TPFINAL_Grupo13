#include "cEjecutivo.h"
using namespace std;

cEjecutivo::cEjecutivo(string _nombre, string _apellido, int _DNI, string _codigo) :cPasajero(_nombre, _apellido, _DNI, _codigo) {

}
bool cEjecutivo::esejecutivo() {
	return true;
}

void cEjecutivo::Imprimir() {
	cout << to_string() << endl;
}
void cEjecutivo::HacerseMasaje(cAzafatas* azafata)
{
	azafata->AtenderLlamadosCliente(this);
	cout << "Azafata hace masajes al pasajero" << endl;
}

void cEjecutivo::PedirChampagne(cAzafatas* azafata) {
	azafata->AtenderLlamadosCliente(this);
	azafata->EntregarComidayBebida(this);

}