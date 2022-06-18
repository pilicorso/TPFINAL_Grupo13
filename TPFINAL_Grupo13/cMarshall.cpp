#include "cMarshall.h"
cMarshall::cMarshall(string _nombre, string _apellido, int _DNI, int _codigoempleado) :cPersonal(_nombre, _apellido, _DNI, _codigoempleado) {

}

string cMarshall::to_string()
{
	return "El nombre de Marshall es:" + this->nombre + "\n" + "El apellido:" + this->apellido + "\n" + "El dni:" + std::to_string(this->DNI) + "\n" + "El codigo de empleado" + std::to_string(this->codigoempleado) + "\n";
}

cPasajero* cMarshall::arrebatopasajero(cPasajero* pasajero)
{
	cPasajero* tor = NULL;
	int pospasajero = this->avionasociado->getlistapasajero()->BuscarAtPos(pasajero);
	if (pospasajero > -1 && this->avionasociado->lugarprision()) {
		this->avionasociado->getlistapasajero()->Eliminar(pospasajero);
		tor = pasajero;
	}
	return tor;
}
void cMarshall::Imprimir()
{
	cout << to_string() << endl;
}
