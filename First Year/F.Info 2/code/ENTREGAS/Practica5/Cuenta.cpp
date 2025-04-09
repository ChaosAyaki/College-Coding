#include "Cuenta.h"

Cuenta::Cuenta(){
	this->numero = "";
	this->saldo = 0.0;
}

Cuenta::Cuenta(string numero, float saldo){
	this->numero = numero;
	this->saldo = saldo;
}

bool const 