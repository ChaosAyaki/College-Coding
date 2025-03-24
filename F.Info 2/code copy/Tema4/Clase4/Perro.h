// Desde ahora SIEMPRE se debe agregar #pragma once al inicio de los archivos .h
#pragma once
#include "AnimalTerrestre.h"

class Perro : public AnimalTerrestre {
protected:
	string duenho;
	string raza;

public:
	Perro();
	Perro(string nombre, string especie, string duenho, string raza);

	virtual string comer(string comida);
	virtual string toString();

	string ladrar();
};