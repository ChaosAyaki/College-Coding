#include "Crucero.h"

Crucero::Crucero() : Barco(), CentroTuristico(){
	this->destino = "";
}

Crucero::Crucero(const Crucero& otro) : Barco(otro.nombre), CentroTuristico(otro.nombre, otro.getPasajeros()){
	this->destino = otro.destino;
}

Crucero& Crucero::operator=(const Crucero& otro){
	this->destino = otro.destino;
	return *this;
}

string Crucero::getDestino(){
	return destino;
}

void Crucero::setDestino(string destino){
	this->destino=destino;
}

string Crucero::toString(){
	string s = "El Crucero se llama " + nombre + "tiene una capacidad de " + to_string(this->capacidad) + " con un total de " + to_string(this->getPasajeros()) " pasajeros y con destino " + destino;
	return s;
}