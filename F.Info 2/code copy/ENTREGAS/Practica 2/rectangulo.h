#pragma once 
#include<iostream>
using namespace std;

class Rectangulo{
	private:
    float alto;
	double ancho;
	
	public:
	void setAlto(float nuevo_alto);
	void setAncho(double nuevo_ancho);
	float getAlto();
	double getAncho();
	void cambiarAltoAncho(float nuevo_alto, double nuevo_ancho);
	float calcularArea();
	float calcularPerimetro();
};