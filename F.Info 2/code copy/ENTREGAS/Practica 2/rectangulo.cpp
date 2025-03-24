#include "rectangulo.h"

using namespace std;

void Rectangulo::setAlto(float nuevo_alto){
	if(nuevo_alto > 0){
		alto = nuevo_alto;
	}
}

float Rectangulo::getAlto(){
	return alto;
}

void Rectangulo::setAncho(double nuevo_ancho){
	if(nuevo_ancho > 0){
		ancho = nuevo_ancho;
	}
}

double Rectangulo::getAncho(){
	return ancho;
}

void Rectangulo::cambiarAltoAncho(float nuevo_alto, double nuevo_ancho){
	alto = nuevo_alto;
	ancho = nuevo_ancho;
}

float Rectangulo::calcularArea(){
	return alto*ancho;
}

float Rectangulo::calcularPerimetro(){
	return (2*alto)+(2*ancho);
}
