#include "Asignatura.h"
#include<array>
#include<list>
#include<iostream>
#include<string>

using namespace std;

int main(){
	int opcion;
	
	do{
		cout << "Elige un ejercicio del 1 al 3 ";
		cin >> opcion;
	}while(opcion != 1 && opcion != 2 && opcion != 3);
	
	cout << endl;
	
	//Suponemos que la dificultad se estima de 0.0 a 10.0
	switch (opcion) {
		case (1):{
			array<Asignatura, 5> asignaturas;
			asignaturas[0] = Asignatura("Matematicas", 8.15, 2);
			asignaturas[1] = Asignatura("Fisica", 9.2, 2);
			asignaturas[2] = Asignatura("Programacion", 7.0, 2);
			asignaturas[3] = Asignatura("Estadistica", 5.4, 2);
			asignaturas[4] = Asignatura("Sistemas", 5.95, 2);
			
			for(int i = 0; i < 5; i++){
				cout << asignaturas[i].toString() << endl;
			}
		};
		
		case (2):{
			//array<Asignatura, 5> asig1, asig2 ,asig3;
			return 0;	
		};
		
		case (3): {
			return 0;
		};
		
		default:
			cout << "Opcion no valida." << endl;
			break;
	}
	return 0;
}