#include <vector>

#include "Coche.h"
#include "Conductor.h"


void mostrarMenu();


ostream& operator<<(ostream& os, Coche& coche) {
	return error;
}
istream& operator>>(istream& is, Coche& coche) {
	return error;
}
ostream& operator<<(ostream& os, Conductor& conductor) {
	// se recomienda verificar si el conductor tiene un coche asociado verificando si es diferente que nullptr
	return error;
}
istream& operator>>(istream& is, Conductor& conductor) {
	return error;
}

int main() {
	// Variables necesarias
	vector<Coche> coches;
	vector<Conductor> conductores;
	/* Contenedor Vector
	* Agregar un elemento a un vector
	* 1. nombre_vector.push_back(Clase(...));
	* 2. Clase clase;
	*    nombre_vector.push_back(clase);
	* Acceder a un elemento de un array
	*    nombre_vector.at(indice)
	* Obtener el tamaño de un vector
	*    nombre_vector.size()
	*/
	int opcion = 0;

	// Variables opcionales
	int cantidad_conductores_asignados = 0;


	cout << "Bienvenido a la empresa Coches VTC!" << endl << "Seleccione una opcion numerica:" << endl;
	while (opcion != 8) {
		mostrarMenu();

		cin >> opcion;
		switch (opcion) {
		case 1: {
			// Cargar conductores desde un archivo
			cout << "Cargando todos los conductores de conductores.txt" << endl;
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 2: {
			// Cargar coches desde un archivo
			cout << "Cargando todos los coches de coches.txt" << endl;
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 3: {
			// Asignar coches a los conductores
			cout << "Se asignaran " << coches.size() << " coches entre " << conductores.size() << " diferentes conductores." << endl;
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 4: {
			// Mostrar los datos de todos los coches
			cout << "Existen " << coches.size() << " coches, mostrados a continuacion: " << endl;
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 5: {
			// Mostrar los datos de todos los conductores
			cout << "Existen " << conductores.size() << " conductores, mostrados a continuacion: " << endl;
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 6: {
			// Crear un archivo con los datos de todos los conductores
			cout << "A continuacion se creara un archivo con todos los conductores, mostrando si/no tiene un coche." << endl;
			cout << endl << "-------------------------------------------------" << endl;
			break; }
		case 7: {
			// Crear un archivo con los datos de todos los conductores y sus coches asignados
			cout << "A continuacion se creara un archivo con todos los conductores, informando de su coche asignado si lo hubiere." << endl;
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