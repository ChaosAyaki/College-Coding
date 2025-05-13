#include "Asignatura.h"

Asignatura::Asignatura(){
	this->nombre = "";
	this->dificultad_esperada = 0.0;
	this->cuatrimestre = 0;
}

Asignatura::Asignatura(string nombre, float dificultad_esperada, int cuatrimestre){
	this->nombre = nombre;
	this->dificultad_esperada = dificultad_esperada;
	this->cuatrimestre = cuatrimestre;
}

string Asignatura::toString(){
	string s = "La asignatura es " + nombre + " con una dificultad de " + to_string(dificultad_esperada) + " del cuatrimestre " + to_string(cuatrimestre);
	return s;
}