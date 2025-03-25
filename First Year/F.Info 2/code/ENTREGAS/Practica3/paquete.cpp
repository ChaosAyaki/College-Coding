#include "paquete.h"

Paquete::Paquete(){
	this->codigoDestino = 0;
	this->id = 0;
}

Paquete::Paquete(int id){
	this->id = id;
	this->codigoDestino = -1;
}

int Paquete::getCodigoDestino(){
	return codigoDestino;
}

bool Paquete::setCodigoDestino(int codigoDestino){
	if(codigoDestino > 9999 && codigoDestino < 100000){
		this->codigoDestino = codigoDestino;
		return true;
	} else {
		return false;
	}
}

string Paquete::toString(){
	string s;
	s = "La empresa se llama " + to_string(nombre_empresa) + ", el id del paquete es " to_string(id) + " y el codigo de destino es " + to_string(codigoDestino);
	return s;
}