#include "coche.h"
using namespace std;

void Coche::setColor(string& nuevo_Color){
	color = nuevo_Color;
}

void Coche::setMotor(string& nuevo_Motor){
	motor = nuevo_Motor;
}

void Coche::setVelocidadMaxima(double nueva_VelocidadMaxima){
	VelocidadMaxima = nueva_VelocidadMaxima;
}

double Coche::obtenerVelocidad(){
	if(encendido == true){
		return velocidad;
	} else {
		return 0;
	}
}

void Coche::arrancar(){
	encendido = true;
}

void Coche::apagar(){
	if(velocidad = 0){
		encendido = false;
	}
}

void Coche::frenar(double decremento){
	if(encendido == true && (velocidad-decremento) >= 0){
		velocidad -= decremento;
	}
}

void Coche::acelerar(double incremento){
	if(encendido == true && (velocidad+incremento) =< VelocidadMaxima){
		velocidad += incremento;
	}
}

bool Coche::isEncendido(){
	return encendido;
}
