#pragma once
#include <iostream>
#include <string>
#include "cPasajero.h"

using namespace std;

class cEjecutivo:
	public cPasajero
{
public:
#pragma region Constructor y Destructor
	cEjecutivo(string _nombre, string _apellido, int _DNI, string _codigo);
	~cEjecutivo();
#pragma endregion

#pragma region Metodos
	bool esturista();
	bool esejecutivo();
	bool esprimeraclase();
	void Imprimir();
	void HacerseMasaje(cAzafatas* azafata);
	void PedirChampagne(cAzafatas* azafata);
	void generarcodigo();
#pragma endregion
};

