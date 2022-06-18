#ifndef CPILOTO_H
#define CPILOTO_H
#include <iostream>
#include <string>
#include "cPersonal.h"
#include "cAvion.h"
#include "cAzafatas.h"

using namespace std;

class cPiloto:
	public cPersonal
{
	public:
#pragma region Constructor y Destructor
	cPiloto(string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cPiloto();
#pragma endregion

#pragma region Metodos
	void Imprimir();
	void AnunciosAltavoz();
	void PilotearAvion(cAvion* avion);
	void PedirComidaoBebida(cAzafatas* azafata);
	cAvion* getavion();
	string to_string();
#pragma endregion
};
#endif
