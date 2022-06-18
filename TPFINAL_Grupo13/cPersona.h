#pragma once
#include <iostream>
#include <string>

using namespace std;
class cPersona{
protected:
	string nombre;
	string apellido;
	int DNI;
public:
#pragma region Constructores y Destructores
	cPersona(string _nombre, string _apellido, int _DNI);
	~cPersona();
#pragma endregion

#pragma region Virtual
	virtual string to_string() = 0;
#pragma endregion
};

