#pragma once
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Vector2D;

class Complejo {
private:
	float real;
	float imag;
public:
	Complejo();
	Complejo(double real, double imag);
	Complejo(double num, bool es_real);
	Complejo(const Complejo& c);

	Complejo operator=(const Complejo& otro);
	void setReal_Imag(float real, float imag);
	void setReal(float real);
	void setImag(float imag);
	float getReal();
	float getImag();
	Complejo operator+(const Complejo& otro);
	Complejo& operator+=(const Complejo& otro);
	// Operando con floats en *= y +
	Complejo operator+(const float& num);
	Complejo& operator*=(const float& num);


	bool operator==(const Complejo& otro);
	// Asignación por copia de un int
	Complejo& operator=(const int& real);
	// Constructor por copia de un int
	Complejo(const int& imag);

	friend class Vector2D;

	friend bool comparaModulo(Vector2D v, Complejo c);

	float modulo();
	
    friend ostream & operator<<(ostream &os, Complejo& c);

};