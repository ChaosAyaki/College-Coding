#include <fstream>
#include <string>
#include <iomanip>
#include <vector>

#include "Coche.h"
#include "Conductor.h"

using namespace std;

void mostrarMenu();

ifstream archivo_conductores = ifstream("conductores.txt", ios::in);
ifstream archivo_coches = ifstream("coches.txt", ios::in);

ofstream archivo_resumen = ofstream("ResumenConductores.txt", ios::out);
ofstream archivo_cond_coches = ofstream("conductores_coches.txt", ios::out);


ostream& operator<<(ostream& os, Coche& coche) {
	if (&os == &cout) {
		return os << coche.getMarca() << "-" << coche.getModelo() << " " << coche.getAnho() << " " << coche.getMatricula();
	}
	else {
		return os << coche.getMatricula() << "," << coche.getMarca() << "," << coche.getModelo();
	}
}
istream& operator>>(istream& is, Coche& coche) {
	return is >> coche.matricula >> coche.marca >> coche.modelo >> coche.anho;
}
ostream& operator<<(ostream& os, Conductor& conductor) {
	if (&os == &cout) {
		return os << conductor.getNombreCompleto() << " " << conductor.getDNI() << " " << conductor.getPuntuacion() << " ";
	}
	else if (&os == &archivo_resumen) {
		if (conductor.getCoche() != nullptr) {
			return os << quoted(conductor.getNombreCompleto()) << " " << "Si " << conductor.getPuntuacion() << " " << conductor.getNumViajes();
		}
		else {
			return os << quoted(conductor.getNombreCompleto()) << " " << "No" << " " << "-" << "-" << " ";
		}
	}
	else if (&os == &archivo_cond_coches) {
		if (conductor.getCoche() != nullptr) {
			return os << conductor.getNombreCompleto() << " " << conductor.getDNI() << " " << *conductor.getCoche();
		}
		else {
			return os << conductor.getDNI() << " " << conductor.getPuntuacion() << " " << conductor.getNumViajes();
		}
	}
}
istream& operator>>(istream& is, Conductor& conductor) {
	return is >> conductor.DNI >> quoted(conductor.nombre_completo) >> conductor.num_viajes >> conductor.puntuacion;
}

int main() {
	// Variables necesarias
	vector<Coche> coches;
	vector<Conductor> conductores;
	int opcion = 0;

	// Variables opcionales
	int cantidad_conductores_asignados = 0;


	cout << "Bienvenido a la empresa Coches VTC!" << endl << "Seleccione una opcion numerica:" << endl;
	while (opcion != 8) {
		mostrarMenu();

		cin >> opcion;
		switch (opcion) {
		case 1: {
			if (archivo_conductores) {
				// Cargar conductores desde un archivo
				cout << "Cargando todos los conductores de conductores.txt" << endl;
				Conductor nuevo_conductor;

				while (archivo_conductores >> nuevo_conductor) {
					conductores.push_back(nuevo_conductor);
				}
			}

			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 2: {
			if (archivo_coches) {
				// Cargar coches desde un archivo
				cout << "Cargando todos los coches de coches.txt" << endl;
				Coche nuevo_coche;
				string aux_encabezado;
				archivo_coches >> aux_encabezado >> aux_encabezado >> aux_encabezado >> aux_encabezado;
				while (archivo_coches >> nuevo_coche) {
					coches.push_back(nuevo_coche);
				}
			}

			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 3: {
			// Asignar coches a los conductores
			cout << "Se asignaran " << coches.size() << " coches entre " << conductores.size() << " diferentes conductores." << endl;

			for (int i = 0; i < coches.size(); i++)
			{
				conductores.at(i).setCoche(&(coches.at(i)));
			}


			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 4: {
			// Mostrar los datos de todos los coches
			cout << "Existen " << coches.size() << " coches, mostrados a continuacion: " << endl;

			for (int i = 0; i < coches.size(); i++)
			{
				cout << coches.at(i) << endl;
			}


			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 5: {
			// Mostrar los datos de todos los conductores
			cout << "Existen " << conductores.size() << " conductores, mostrados a continuacion: " << endl;

			for (int i = 0; i < conductores.size(); i++)
			{
				cout << conductores.at(i) << endl;
			}

			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 6: {
			if (archivo_resumen) {
				// Crear un archivo con los datos de todos los conductores
				cout << "A continuacion se creara un archivo con todos los conductores, mostrando si/no tiene un coche." << endl;


				archivo_resumen << "Nombre" << "Tiene Coche" << "Puntuacion" << "Num. de viajes" << endl;
				for (int i = 0; i < conductores.size(); i++)
				{
					archivo_resumen << conductores.at(i) << endl;
				}
			}
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 7: {
			// Crear un archivo con los datos de todos los conductores y sus coches asignados
			if (archivo_cond_coches) {
				cout << "A continuacion se creara un archivo con todos los conductores, informando de su coche asignado si lo hubiere." << endl;

				for (int i = 0; i < conductores.size(); i++)
				{
					archivo_cond_coches << conductores.at(i) << endl;
				}
			}
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 8: {
			// Salir
			break; }
		default: {
			cout << endl << "-------------------------------------------------" << endl;
			cout << "Opcion no valida" << endl;
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		}
	}

	cout << "Adios!" << endl;


	return 0;
}

void mostrarMenu() {
	cout << "1. Cargar conductores desde un archivo" << endl;
	cout << "2. Cargar coches desde un archivo" << endl;
	cout << "3. Asignar coches a los conductores" << endl;
	cout << "4. Mostrar los datos de todos los coches" << endl;
	cout << "5. Mostrar los datos de todos los conductores" << endl;
	cout << "6. Crear un archivo con los datos de todos los conductores" << endl;
	cout << "7. Crear un archivo con los datos de todos los conductores y sus coches asignados" << endl;
	cout << "8. Salir" << endl;
}