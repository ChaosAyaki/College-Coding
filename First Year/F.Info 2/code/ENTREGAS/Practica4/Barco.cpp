#include"Barco.h"

Barco::Barco() : Vehiculo(){
	this->capacidad = 0.0;
}

Barco::Barco(string nombre, float capacidad) : Vehiculo(string nombre){
	this->capacidad = capacidad;
}

float Barco::getCapacidad(){
	return capacidad;
}

void Barco::setCapacidad(float capacidad){
	this->capacidad = capacidad;
}

string Barco::toString(){
	string = s;
	s = "El barco tiene una capacidad de " + to_string(capacidad);
	return s;
}