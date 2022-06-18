#include "cAzafatas.h"
using namespace std;

cAzafatas::cAzafatas(string _nombre, string _apellido, int _DNI, int _codigoempleado) :cPersonal(_nombre, _apellido, _DNI, _codigoempleado) {

}
void cAzafatas::AtenderLlamadosCliente(cPasajero* pasajero)
{
	pasajero->LlamarAzafata(this);
}
void cAzafatas::AtenderLlamadosPiloto(cPiloto* piloto)
{
	piloto->PedirComidaoBebida(this);
}
void cAzafatas::EntregarComidayBebida(cPasajero* pasajero)
{
	pasajero->PedirComidayBebida(this);
}