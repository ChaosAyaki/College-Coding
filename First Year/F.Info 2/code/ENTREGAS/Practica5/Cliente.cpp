#include "Cliente.h"

Cliente::Cliente() : Persona(), cuenta(){}
Cliente::Cliente(string nombre, string DNI, Cuenta cuenta) : Persona(nombre,DNI) , cuenta(cuenta){}
Cliente::Cliente(Persona persona, Cuenta cuenta) : Persona(persona), cuenta(cuenta){}

void Cliente::setCuenta(Cuenta nueva_cuenta){
    cuenta = nueva_cuenta;
}

Cuenta Cliente::getCuenta(){
    return cuenta;
}

ostream& operator<<(ostream& os, Cliente& cliente){
    return os << Cliente.getDNI() << " " << Cliente.getCuenta().getNumero() << " " << Cliente..getCuenta().getSaldo();
}

string Cliente::toString(){
    string s = "La cuenta: " << to_string(cuenta);
}