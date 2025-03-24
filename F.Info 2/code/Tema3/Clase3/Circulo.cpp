#include "Circulo.h"

Circulo::Circulo() {
	radio = 0;
}

Circulo::Circulo(float radio) {
	this->radio = radio;
}

void Circulo::setRadio(float radio) {
	this->radio = radio;
}

float Circulo::getRadio() {
	return radio;
}

float Circulo::area() {
	return PI * radio * radio;
}

float Circulo::perimetro() {
	return 2 * PI * radio;
}

// memoria estatica
float Circulo::PI = 3.14159265;

float Circulo::radianesAGrados(float radianes) {
	return radianes * 180 / PI;
}

float Circulo::getCuerda(float angulo_rad) {
	return 2 * radio * sin(angulo_rad / 2);
}

float Circulo::getCuerda(float ang1_rad, float ang2_rad) {
	return 2 * radio * sin(abs(ang2_rad - ang1_rad) / 2);
}