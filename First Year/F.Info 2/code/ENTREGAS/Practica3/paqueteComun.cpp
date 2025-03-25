#include "paqueteComun.h"

PaqueteComun::PaqueteComun() : Paquete(){
	this->peso = 0;
}

PaqueteComun::PaqueteComun(int id) : Paquete(int id){
	this->peso = 0;
}

PaqueteComun::PaqueteComun(int id, float peso) : Paquete(int id){
	this->peso = peso;
}

float PaqueteComun::getPeso(){
	return peso;
}

string PaqueteComun::toString(){
	string s = "El peso del paquete comun es " + to_string(peso) + " y el precio por kg es " to_string(precio_por_kg);
	return s;
}
