#include "Persona.h"

Persona::Persona(){
    nombre = "";
    DNI = "";
    tarjeta = Tarjeta();
}

Persona::Persona(string nombre, string DNI){
    this->nombre = nombre;
    this->DNI = DNI;
    tarjeta = Tarjeta();
}

string Persona::getNombre(){
    return nombre;
}

string Persona::getDNI(){
    return DNI;
}

Tarjeta Persona::getTarjeta(){
    return tarjeta;
}

void Persona::setNombre(string nombre){
    this->nombre = nombre;
}

void Persona::setDNI(string DNI){
    this->DNI = DNI;
}

void Persona::setTarjeta(const Tarjeta tarjeta){
    this->tarjeta =  tarjeta;
}

bool Persona::operator==(const string &dni_a_buscar) const{
    return this->DNI == dni_a_buscar;
}

