#include"Vehiculo.h"

Vehiculo::Vehiculo(){
	this->nombre = "";
}

Vehiculo::Vehiculo(string nombre){
	this->nombre = nombre;
}

string Vehiculo::getNombre(){
	return nombre;
}

void Vehiculo::setNombre(string nombre){
	this->nombre = nombre;
}