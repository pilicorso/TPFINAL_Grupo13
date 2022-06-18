#pragma once
#include <iostream>
#include <string>
#include "cPersona.h"

using namespace std;
class cPersonal:
	public cPersona
{
protected: 
	int codigoempleado;
public:
#pragma region Constructor y Destructor 
	cPersonal(string _nombre, string _apellido, int _DNI, int _codigoempleado);
	~cPersonal();
	string to_string();
#pragma endregion
	//getters y setters
};

