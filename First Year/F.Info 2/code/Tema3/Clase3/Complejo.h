#pragma once
#include <iostream>

using namespace std;
class Complejo {
private:
	float real;
	float imag;
public:
	Complejo();
	Complejo(double real, double imag);

	// Constructor que recibe un flotante y un booleano
	Complejo(double num, bool es_real);

	~Complejo();
	void setReal_Imag(float real, float imag);
	
	void setReal(float real);
	void setImag(float imag);
	float getReal();
	float getImag();
};