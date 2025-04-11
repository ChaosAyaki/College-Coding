#include "Cuenta.h"

Cuenta::Cuenta(){
	this->numero = "";
	this->saldo = 0.0;
}

Cuenta::Cuenta(string numero, float saldo){
	this->numero = numero;
	this->saldo = saldo;
}

bool const Cuenta::operator<(const Cuenta& otra){
	if(saldo < otra.saldo){
		return true;
	} else {
		return false;
	}
}

Cuenta Cuenta::operator+(const float& otra){
	return Cuenta(numero, saldo + monto);
}

ostream& operator& operator<<(ostream& os, const Cuenta& cuenta){
	os << "Saldo cuenta " << cuenta.saldo;
	return os;
}

void Cuenta::setNumero(string nuevo_numero){
	numero = nuevo_numero;
}

string Cuenta::getNumero(){
	return numero;
}

void Cuenta::setSaldo(float nuevo_saldo){
	saldo = nuevo_saldo;
}

float Cuenta::getSaldo(){
	return saldo;
}

string Cuenta::toString(){
	string s = "Numero de cuenta es " + numero + " y tiene de saldo " + to_string(saldo);
	return s;
}