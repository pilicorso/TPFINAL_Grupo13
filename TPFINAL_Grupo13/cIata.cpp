#include "cIata.h"

using namespace std;

cIata::cIata() {

}

void cIata::Agregarcodigo(string codigo)
{
	if (this->Listacodigo->BuscarAtPos(&codigo) == -1 && chequearcodigo()) // en buscaratpos retorna - 1 si no esta, por lo tanto estoy chequeando que no este en otra lista
		this->Listacodigo->Insertar(&codigo);
}