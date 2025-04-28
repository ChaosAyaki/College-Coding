#include "Estudiante.h"
#include <iostream>

Estudiante::Estudiante(){
    nombre = "";
    DNI = 0;
    puntaje_acumulado = 0.0;
};

Estudiante::Estudiante(string nombre, long int dni){
    this->nombre = nombre;
    DNI = dni;
    puntaje_acumulado = 0.0;
};

// Getters
string Estudiante::getNombre() {
    return nombre;
}

long int Estudiante::getDNI() {
    return DNI;
}

float Estudiante::getPuntajeAcumulado() {
    return puntaje_acumulado;
}

// Setters
void Estudiante::setNombre(string nombre) {
    this->nombre = nombre;
}

void Estudiante::setDNI(long int dni) {
    DNI = dni;
}

void Estudiante::setPuntajeAcumulado(float puntaje) {
    puntaje_acumulado = puntaje;
}



string Estudiante::toString() {
    string orden = *ordenamiento_por_DNI ? "DNI" : "Puntaje";
    string salida = "Nombre: " + nombre + "\tDNI: " + to_string(DNI) + "\tPuntaje acumulado: " + to_string(puntaje_acumulado) + "\tOrdenamiento por: " + orden;
    return salida;
}

bool Estudiante::operator<(const Estudiante& otro) const {
    if (*ordenamiento_por_DNI) {
        return DNI < otro.DNI;
    }
    return puntaje_acumulado < otro.puntaje_acumulado;
}

bool * Estudiante::ordenamiento_por_DNI = new bool(true); 