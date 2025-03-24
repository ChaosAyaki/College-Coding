#pragma once
#include <iostream>
#include <cmath>

using namespace std;
class Circulo {
private:
	float radio;
public:
	static float PI;

	Circulo();
	Circulo(float radio);
	void setRadio(float radio);
	float getRadio();
	float area();
	float perimetro();

	float getCuerda(float angulo_rad);
	float getCuerda(float ang1_rad, float ang2_rad);

	static float radianesAGrados(float radianes);
};