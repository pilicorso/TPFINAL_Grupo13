#ifndef CPASAJERO_H
#define CPASAJERO_H

#include <iostream>
#include "cPersona.h"
#include "cAzafatas.h"
#include "cAvion.h"

using namespace std;

class cPasajero:
	public cPersona
{
protected:
	string codigo;
public:
#pragma region Constructor y Destructor
	cPasajero(string _nombre, string _apellido, int _DNI, string _codigo);
	~cPasajero();
#pragma endregion

#pragma region Metodos
	string to_string();
	string PresentarCodigo();
	void cometerdelito();
	void Dormir();
	void PedirComidayBebida(cAzafatas *azafata);
	void LlamarAzafata(cAzafatas *azafata);
	void IralBanioyVolver();
	cAvion* getavion();
#pragma endregion

#pragma region Virtual
	virtual void generarcodigo() = 0;
	virtual bool esturista() = 0;
	virtual bool esejecutivo() = 0;
	virtual bool esprimeraclase() = 0;
#pragma endregion
};
#endif

