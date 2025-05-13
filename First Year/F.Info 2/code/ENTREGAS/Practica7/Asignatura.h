#pragma once
#include<iostream>
#include<string>

using namespace std;

class Asignatura {
	private: 
		string nombre;
		float dificultad_esperada;
		int cuatrimestre;
	public:
		Asignatura();
		Asignatura(string nombre, float dificultad_esperada, int cuatrimestre);	
		string toString();
};



