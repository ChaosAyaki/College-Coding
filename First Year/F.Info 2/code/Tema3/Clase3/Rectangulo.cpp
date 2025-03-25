#include "Rectangulo.h"

Rectangulo::Rectangulo() {
	largo = 0;
	ancho = 0;
}

Rectangulo::Rectangulo(float largo, float ancho) {
	this->largo = largo;
	this->ancho = ancho;
}

float Rectangulo::area() {
	return largo * ancho;
}

float Rectangulo::perimetro() {
	return 2 * (largo + ancho);
}

string Rectangulo::toString() {
	return "Rectangulo de largo " + to_string(largo) + " y ancho " + to_string(ancho);
}