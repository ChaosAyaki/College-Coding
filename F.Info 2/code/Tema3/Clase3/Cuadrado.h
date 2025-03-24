#pragma once  // 1
#include <iostream>
#include <cmath>
#include "Rectangulo.h" // 2

using namespace std;
class Cuadrado: public Rectangulo { // 3
public:
	Cuadrado();
	Cuadrado(float lado);
	void setLado(float lado);

	string toString();
};