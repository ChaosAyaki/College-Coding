#include"Complejo.h"

Complejo::Complejo() {
	real = 0;
	imag = 0;
}

Complejo::Complejo(double real, double imag) {
	this->real = real;
	this->imag = imag;
}

Complejo::Complejo(double num, bool es_real){
	if(es_real){
		
	}
}

// Constructor que recibe un flotante y un booleano

Complejo::~Complejo() {
	// cout << "Se ha llamado al destructor, el objeto dejara de existir" << endl;
	// cout << "El objeto a eliminar tiene valor: " << real << "+ " << imag << "i" << endl;
}

void Complejo::setReal_Imag(float real, float imag) {
	this->real = real;
	this->imag = imag;
}

void Complejo::setReal(float real) {
	this->real = real;
}

void Complejo::setImag(float imag) {
	this->imag = imag;
}

float Complejo::getReal() {
	return real;
}

float Complejo::getImag() {
	return imag;
}
