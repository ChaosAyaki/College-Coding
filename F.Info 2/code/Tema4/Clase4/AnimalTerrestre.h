// Desde ahora SIEMPRE se debe agregar #pragma once al inicio de los archivos .h
#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;
// usar virtual public Animal para que no se duplique la herencia
class AnimalTerrestre: virtual public Animal{
public:
	AnimalTerrestre();
	AnimalTerrestre(string nombre, string especie);
	
	AnimalTerrestre operator=(const AnimalTerrestre& otro);
	virtual string toString();
	string andar();
};