#include"Cuadrado.h"

Cuadrado::Cuadrado() : Rectangulo() {
}

Cuadrado::Cuadrado(float lado) : Rectangulo(lado, lado) {
}

void Cuadrado::setLado(float lado) {
	// largo = lado;
	// ancho = lado;
}

string Cuadrado::toString() {
	return "Cuadrado de lado " + to_string(largo);
}