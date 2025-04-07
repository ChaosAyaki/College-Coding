#include"Complejo.h"

Complejo::Complejo() {
	real = 0;
	imag = 0;
}

Complejo::Complejo(double real, double imag) {
	this->real = real;
	this->imag = imag;
}

// Constructor que recibe un flotante y un booleano
Complejo::Complejo(double num, bool es_real){
	if(es_real){
		real = num;
		imag = 0;
	}else{
		real = 0;
		imag = num;
	}
}

Complejo::Complejo(const Complejo& otro) {
	real = otro.real;
	imag = otro.imag;
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


Complejo Complejo::operator=(const Complejo& otro) {
	real = otro.real;
	imag = otro.imag;
	return *this;
}

Complejo Complejo::operator+(const Complejo& otro) {
	Complejo resultado;
	resultado.real = this->real + otro.real;
	resultado.imag = this->imag + otro.imag;
	return resultado;
}

Complejo& Complejo::operator+=(const Complejo& otro) {
	this->real += otro.real;
	this->imag += otro.imag;
	return *this;
}

bool Complejo::operator==(const Complejo& otro) {
	return (real == otro.real) && (imag == otro.imag);
}

Complejo& Complejo::operator=(const int& real){
	this->real = real;
	this->imag = 0;
	return *this;
}

Complejo::Complejo(const int& imag){
	this->real = 0;
	this->imag = imag;
}

float Complejo::modulo(){
	return sqrt(real*real + imag*imag);
}

Complejo Complejo::operator+(const float& num){
	Complejo resultado;
	resultado.real = this->real + num;
	resultado.imag = this->imag;
	return resultado;
}

Complejo& Complejo::operator*=(const float& num){
	real *= num;
	imag *= num;
	return *this;
}