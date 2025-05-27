#include <iostream>
#include <string>
#include<fstream>
#include "Persona.h"

#include <vector>

using namespace std;

template<typename container> int encontrarIndice(container personas, string dni_a_buscar);

ifstream archivo = ifstream("personas.txt", ios::in);
ifstream archivo2 = ifstream("tarjetas.txt", ios::in);


ofstream salida = ofstream("resumen.txt", ios::out);

istream& operator>>(istream& is, Persona& persona) {
	is >> persona.DNI >> quoted(persona.nombre);
	return  is;
}

istream& operator>>(istream& is, Tarjeta& tarjeta) {
	return  is >> tarjeta.ID >> tarjeta.nivel_acceso;
}

ostream& operator<<(ostream& os, Tarjeta& tarjeta) {
	return  os;
}

ostream& operator<<(ostream& os, Persona& persona) {
	return  os << persona.DNI << " " << persona.nombre ;
}


int main() {

	string DNI, nombre;
	Persona p;
	vector<Persona> personas;

	if(archivo){

		string aux;

		archivo >> aux  >> aux;
		while(archivo >> p)// 61238746 "nombre apellido"
		{
			personas.push_back(p);
		}
		archivo.close();
	}

	Tarjeta t;
	vector<Tarjeta> tarjetas;
	vector<string> DNIs;

	if(archivo2){

		while(archivo2 >> t >> DNI)// 61238746 "nombre apellido"
		{
			tarjetas.push_back(t);
			DNIs.push_back(DNI);
		}
		archivo2.close();
	}

	int idx = 0;
	for (int i = 0; i < DNIs.size(); i++)
	{
		idx = encontrarIndice(personas, DNIs[i]);
		if (idx != -1)
		{
			personas[idx].setTarjeta(tarjetas[i]);
		}
	}

	if(salida){
		for (int i = 0; i < personas.size(); i++)
		{
			salida << personas[i] << endl;
		}
		

		salida.close();
	}

	
	return 0;
}

template<typename container> int encontrarIndice(container personas, string dni_a_buscar) {
	int indice = -1, busqueda = 0;
	for (const auto& c : personas)
	{
		if (c == dni_a_buscar) {
			indice = busqueda;
			break;
		}
		busqueda++;
	}
	return indice;
}