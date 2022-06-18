#pragma once
#include <iostream>
#include <string>
#include "cPasajero.h"
#include "cMarshall.h"
#include "cLista.h"
class cIata{
private:
	cLista<string>* Listacodigo;
	const int cantmaxaviones = 100;
public:
	static int cantAviones;
#pragma region Constructor y Destructor
	cIata();
	~cIata();
#pragma endregion

#pragma region Metodos
	void generarcodigovuelo(cAvion* avion);
	void Imprimir();
	//string to_string();
	int AgregarAvion(cAvion* avion);
	bool chequearcodigo(string codigo);
	void Agregarcodigo(string codigo);
	void ReservarAsientoMarshall(cAvion* avionasignado, cMarshall* marshall);
#pragma endregion
};

