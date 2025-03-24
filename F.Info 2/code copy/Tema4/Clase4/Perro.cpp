#include "Perro.h"

Perro::Perro() : AnimalTerrestre() {
	nombre = "desconocido";
	especie = "Canis Familiaris";
	duenho = "desconocido";
	raza = "desconocida";
}

Perro::Perro(string nombre, string especie, string duenho, string raza) : AnimalTerrestre(nombre, especie) {
	this->duenho = duenho;
	this->raza = raza;
}


string Perro::comer(string comida) {
	return "El perro " + nombre + " esta comiendo " + comida + ".";
}
string Perro::toString() {
	string perro = "Clase Perro: Duenho: " + duenho + ". Raza: " + raza + ". " + AnimalTerrestre::toString();
	return perro;
}

string Perro::ladrar() {
	string salida = "El perro " + nombre + " esta ladrando.";
	return salida;
}