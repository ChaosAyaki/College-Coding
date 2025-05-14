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
			
			break;
		};
		
		case (2):{
			
			array<Asignatura, 5> asig1 = {{ //Se puede poner solo una llave en los arrays pero por si acaso ponemos dobles aunque este bien
                {"Matematicas I", 8.0, 1},
                {"Fisica I", 9.0, 4},
                {"Programacion I", 7.15, 1},
                {"Ingles I", 4.0, 1},
                {"Algebra", 6.26, 1}
            }};

            array<Asignatura, 5> asig2 = {{
                {"Matematicas II", 2, 2},
                {"Fisica II", 2, 2},
                {"Programacion II", 2, 2},
                {"Ingles II", 2, 2},
                {"Bases de Datos", 2, 2}
            }};

            array<Asignatura, 5> asig3 = {{
                {"Sistemas Operativos", 3, 3},
                {"Redes", 3, 3},
                {"Estructuras de Datos", 3, 3},
                {"POO", 3, 3},
                {"Electronica", 3, 3}
            }};

            array<array<Asignatura, 5>, 3> contenedorGeneral = { asig1, asig2, asig3 };

        	for (int i = 0; i < 5; i++) {
                contenedorGeneral[1][i].dificultad_esperada = 10;  // Cualquier número
            }

            cout << "\nAsignaturas del segundo contenedor con dificultad modificada: " << endl;
            for (const auto& asignatura : contenedorGeneral[1]) {
                cout << asignatura.toString() << endl;
            }
			
			break;	
		};
		
		case (3): {
			
			stack<Asignatura> pilaAsignaturas;

   			pilaAsignaturas.push(Asignatura("Fundamentos de Programación I", 1, 3));
   			pilaAsignaturas.push(Asignatura("Fundamentos de Programación II", 2, 4));
   			pilaAsignaturas.push(Asignatura("Estructuras de Datos", 3, 4));
   			pilaAsignaturas.push(Asignatura("Algoritmos", 4, 5));

    		// Mostrar y vaciar la pila (LIFO)
    		cout << "Asignaturas en orden de eliminacion (ultima a primera):" << endl;
    		while (!pilaAsignaturas.empty()) {
    		    Asignatura a = pilaAsignaturas.top();
    		    a.mostrar(); //Para mostrar los cambios
    		    pilaAsignaturas.pop();
    		}	
			
			break;
		};
		
		default:
			cout << "Opcion no valida." << endl;
			break;
	}
	return 0;
}