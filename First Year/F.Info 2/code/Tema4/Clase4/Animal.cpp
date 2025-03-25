#include "Animal.h"
Animal::Animal() {
	nombre = "desconocido";
	especie = "desconocida";

};
Animal::Animal(string nombre, string especie) {
	this->nombre = nombre;
	this->especie = especie;
}

string Animal::toString() {
	string salida = "Clase Animal: Nombre: " + nombre + ". Especie: " + especie;
	return salida;
}