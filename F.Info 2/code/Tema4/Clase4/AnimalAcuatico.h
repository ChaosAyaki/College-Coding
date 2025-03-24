// Desde ahora SIEMPRE se debe agregar #pragma once al inicio de los archivos .h
#pragma once
#include <iostream>
#include "Animal.h"
using namespace std;
// usar virtual public Animal para que no se duplique la herencia en clases inferiores
class AnimalAcuatico: virtual public Animal{
public:
	AnimalAcuatico();
	AnimalAcuatico(string nombre, string especie);

	AnimalAcuatico operator=(const AnimalAcuatico& otro);
	virtual string toString();
    string nadar();
};