#pragma once
#include<iostream>
#include<string>

using namespace std;

class Vehiculo {
	protected:
		string nombre;
	public:
		Vehiculo();
		Vehiculo(string nombre);
		string getNombre();
		void setNombre(string nombre);
		virtual string toString() = 0;
};