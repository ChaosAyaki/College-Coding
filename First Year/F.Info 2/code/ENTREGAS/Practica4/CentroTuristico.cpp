#include"CentroTuristico.h"

CentroTuristico::CentroTuristico(){
	this->nombre = "";
	this->pasajeros = 0;
}

CentroTuristico::CentroTuristico(string nombre, int pasajeros){
	this->nombre = nombre;
	this->pasajeros = pasajeros;
}

CentroTuristico::CentroTuristico(const CentroTuristico& otro){
	this->nombre = otro.nombre;
}

int CentroTuristico::getPasajeros(){
	return pasajeros;
}

void CentroTuristico::setPasajeros(int pasajeros){
	this->pasajeros = pasajeros;
}

string CentroTuristico::toString(){
	string s = "El centro turistico se llama " + nombre +" y tiene un total de " + to_string(pasajeros);
	return = s;
}