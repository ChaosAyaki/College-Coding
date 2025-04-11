#pragma once
#include<iostream>
#include<string>

using namespace std;

class Persona {
	protected:
		string DNI;
		string nombre;
	public:
		Persona();
		Persona(string nombre, string DNI);
		Persona(const Persona& otra);
		bool const operator==(const Persona& otra);
		friend ostream& operator<<(ostream& os, Persona& persona);
		void setNombre(string nuevo_nombe);
		string getNombre();
		void setDNI(string nuevo_DNI);
		string getDNI();
		virtual string toString();
};

