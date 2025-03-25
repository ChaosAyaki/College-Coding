#pragma once
#include <iostream>
#include <cmath>
#include <string> // para usar to_string

using namespace std;
class Rectangulo {
//private cambia a protected
protected:
	float largo;
	float ancho;
public:
	Rectangulo();
	Rectangulo(float largo, float ancho);
	float area();
	float perimetro();

//  Virtualizar para que se pueda sobreescribir en las clases derivadas
	virtual string toString();
};