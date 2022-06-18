#include "cPasajero.h"

using namespace std;

cPasajero::cPasajero(string _nombre, string _apellido, int _DNI, string _codigo) :cPersona(_nombre, _apellido, _DNI) {
	this->codigo = _codigo;
}
void cPasajero::Dormir() {
	cout << "El pasajero esta durmiendo" << endl;
}
void cPasajero::PedirComidayBebida(cAzafatas* azafata)
{
	azafata->EntregarComidayBebida(this);
}
void cPasajero::LlamarAzafata(cAzafatas* azafata)
{
	azafata->AtenderLlamadosCliente(this);
}
void cPasajero::IralBanioyVolver()
{
	cout << "Va al baño y vuelve" << endl;
}
string cPasajero::to_string() {
	return "El nombre del pasajero es: " + this->nombre + "\n" + "El apellido del pasajero es: \n" + this->apellido + std::to_string(this->DNI) + "" + this->codigo + "";
}

string cPasajero::PresentarCodigo() {
	return this->codigo;
}