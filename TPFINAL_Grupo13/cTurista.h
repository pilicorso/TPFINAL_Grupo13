#pragma once
#include <iostream>
#include <string>
#include "cPasajero.h"

using namespace std;

class cTurista:
	public cPasajero
{
public:
#pragma region Constructor y destructor
	cTurista(string _nombre, string _apellido, int _DNI, string _codigo);
	~cTurista();
#pragma endregion

#pragma region Metodos
	bool esturista() { return true; };
	bool esejecutivo();
	bool esprimeraclase();
	void Imprimir();
	void generarcodigo();
#pragma endregion
};

