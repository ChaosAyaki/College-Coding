#include "AnimalTerrestre.h"
AnimalTerrestre::AnimalTerrestre() : Animal(){

};
AnimalTerrestre::AnimalTerrestre(string nombre, string especie) : Animal(nombre, especie){
}

AnimalTerrestre AnimalTerrestre::operator=(const AnimalTerrestre& otro) {
	this->nombre = otro.nombre;
	this->especie = otro.especie;
	return *this;
}

string AnimalTerrestre::toString() {
	string salida = "Clase AnimalTerrestre: Nombre: " + nombre + ". Especie: " + especie;
	return salida;
}

string AnimalTerrestre::andar() {
	return "El animal terrestre camina";
}