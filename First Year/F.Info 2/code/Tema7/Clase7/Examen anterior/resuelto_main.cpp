#include<iostream>
#include<vector>
#include<iomanip>
#include<fstream>

#include"Persona.h"
#include"Tarjeta.h"

using namespace std;

template<typename container> int encontrarIndice(container personas, string dni_a_buscar);


// 0.2
ifstream archivo_personas = ifstream("personas.txt", ios::in);
// 0.2
ifstream archivo_tarjetas = ifstream("tarjetas.txt", ios::in);


// 0.4
ofstream archivo_resumen = ofstream("resumen.txt", ios::out);

istream& operator>>(istream& is, Persona& persona) {
	// 0.3 // 0.35
	return  is >> persona.DNI >> quoted(persona.nombre);
}

istream& operator>>(istream& is, Tarjeta& tarjeta) {
	// 0.3 // 0.3
	return  is >> tarjeta.ID >> tarjeta.nivel_acceso;
}

ostream& operator<<(ostream& os, Tarjeta& tarjeta) {
// 0.2
	if (&os == &archivo_resumen) {
		// un solo right +0.1
// 0.05 // 0.1 // 0.1 // 0.1 // 0.1 // 0.1
		return os << right << setw(3)<< tarjeta.ID << setw(3)<< tarjeta.nivel_acceso;
	}
}

ostream& operator<<(ostream& os, Persona& persona) {
// 0.2
	if (&os == &archivo_resumen) {
		// un solo left +0.1
// 0.05 // 0.1 // 0.1 // 0.1 // 0.1 // 0.1
		return os << left << setw(10) << persona.DNI << setw(25)<< persona.nombre << persona.tarjeta;
	}
}


int main() {
	// 0.2
	vector<Persona> personas;
	// 0.1
	if (archivo_personas) {
		Persona nueva_persona;
		string aux;
		// 0.1
		archivo_personas >> aux >> aux;
		// 0.2
		while (archivo_personas >> nueva_persona ) {
			// 0.2
			personas.push_back(nueva_persona);
		}
		// 0.1
		archivo_personas.close();
	}

// 0.2
	vector<Tarjeta> tarjetas;
// 0.2
	vector<string> DNIs;

	// 0.1
	if (archivo_tarjetas){
		// 0.05
		Tarjeta tarjeta;
		string dni;
		// 0.4
		while(archivo_tarjetas >> tarjeta >> dni){
			// 0.2
			tarjetas.push_back(tarjeta);
			// 0.2
			DNIs.push_back(dni);
		}
			// 0.1
		archivo_tarjetas.close();
	}


	// 0.25
	int indice = 0;
	// 0.5
	for (int i = 0; i < DNIs.size(); i++)
	{
	// 0.5
		indice = encontrarIndice(personas, DNIs[i]);
	// 0.25
		if (indice != -1){
	// 0.5
			personas[indice].setTarjeta(tarjetas[i]);
		}

	}
	// 0.2
	if(archivo_resumen){
		// 0.5
		for (int i = 0; i < personas.size(); i++)
		{	// 1.2
			archivo_resumen << personas[i] << endl;
		}
		// 0.2
		archivo_resumen.close();
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