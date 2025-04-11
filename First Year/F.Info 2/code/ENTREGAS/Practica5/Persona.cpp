#include "Persona.h"

Persona::Persona(){
	this->nombre = "";
	this->DNI = "";
}

Persona::Persona(string nombre, string DNI){
	this->nombre = nombre;
	this->DNI = DNI;
}

Persona::Persona(const Persona &otra){
	this->nombre = "Desconocido";
	this->DNI = "Desconocido";
}

bool const Persona::operator==(const Persona& otra){
	if(this->DNI == otra.DNI){
		return true;
	} else {
		return false;
	}
}

ostream& operator<<(ostream& os, Persona& persona){
	return os << "Nombre: " << persona.nombre << ", DNI: " << persona.DNI;
}

void Persona::setNombre(string nuevo_nombre){
	nombre = nuevo_nombre;
}

string Persona::getNombre(){
	return nombre;
}

void Persona::setDNI(string nuevo_DNI){
	DNI = nuevo_DNI;
}

string Persona::getDNI(){
	return DNI;
}

virtual string Persona::toString(){
	string s = "El nombre es " + nombre + " y el DNI es " + DNI;
	return s;
}







