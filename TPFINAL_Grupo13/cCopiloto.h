#pragma once
#include <iostream>
#include "cPiloto.h"

using namespace std;

class cCopiloto:
	public cPiloto
{
public:
#pragma region Constructor y Destructor
	cCopiloto(string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cCopiloto();
#pragma endregion
#pragma region Metodos
	void Imprimir();
	void PedidoDespegueyAterrizaje();
	cPiloto* getavion();
	string to_string();
#pragma endregion
};

