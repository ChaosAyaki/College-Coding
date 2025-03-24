// Desde ahora SIEMPRE se debe agregar #pragma once al inicio de los archivos .h
#pragma once
#include "AnimalTerrestre.h"
#include "AnimalAcuatico.h"

class Pato : public AnimalTerrestre, public AnimalAcuatico {
protected:
	string raza;
	string color_de_pico;

public:
	Pato();
	Pato(string nombre, string especie, string raza, string color_de_pico);
	Pato(const Pato& otro);

	Pato operator=(const Pato& otro);

	virtual string comer(string comida);
	virtual string toString();

	string hacerCosasDePato();
};