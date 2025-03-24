// Desde ahora SIEMPRE se debe agregar #pragma once al inicio de los archivos .h
#pragma once
#include <iostream>
using namespace std;
class Animal {
protected:
	string nombre;
	string especie;
public:
	Animal();
	Animal(string nombre, string especie);
	virtual string toString();
	virtual string comer(string comida) {};

};