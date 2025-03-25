#pragma once
#include <cmath>
#include <string>
#include "Perro.h"

using namespace std;

class PerroPolicia : public Perro {
private:
	int anhos_servicio;

public:
	PerroPolicia();
	PerroPolicia(string nombre, string especie, string duenho, string raza, int anhos_servicio);

	virtual string toString();
	virtual string ladrar();
	bool buscarObjeto(string objeto);

};