#include "AnimalAcuatico.h"
AnimalAcuatico::AnimalAcuatico() : Animal() {
};
AnimalAcuatico::AnimalAcuatico(string nombre, string especie) : Animal(nombre, especie){
}

AnimalAcuatico AnimalAcuatico::operator=(const AnimalAcuatico& otro) {
	this->nombre = otro.nombre;
	this->especie = otro.especie;
	return *this;
}

string AnimalAcuatico::toString() {
	string salida = "Clase AnimalAcuatico: Nombre: " + nombre + ". Especie: " + especie;
	return salida;
}
string AnimalAcuatico::nadar() {
	return "El animal terrestre nada";
}