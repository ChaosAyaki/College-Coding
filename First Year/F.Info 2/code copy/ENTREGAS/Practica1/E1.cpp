#include<iostream>
#include "utils.h"

using namespace std;

int main(){
	int opcion;
	
	cout << "Elegir opcion(1,3,5,7): ";
    cin >> opcion;
	
	switch(opcion){
		case 1 : {
			float angulo;
			float &r_f1 = angulo;
			cout << "Introduzca un angulo: ";
			cin >> angulo;
			ejercicio1(r_f1);
			cout << "Tu angulo en radianes es " << angulo << endl;
			break;
		}
		case 3 : {
			int a = 10;
			int* p_a = &a;
			double b = 8.1;
			double* p_b = &b;
			long c = 6;
			ejercicio3(p_a,p_b,c);
			cout << "El resultado es " << b << endl;
			break;
		}
		case 5 : {
			int memoria;
			
			do{
				cout << "Introduzca un tamanio para los vectores: ";
				cin >> memoria;
			}while(memoria < 0);

			int v1[memoria], v2[memoria];
			
			for(int i = 0; i<memoria; i++){
				cout << "Introduzca un valor en la posicion del v1 " << i+1 << " :";
				cin >> v1[i];
			}
			
			for(int i = 0; i < memoria; i++){
				cout << "Introduzca un valor en la posicion del v2 " << i+1 << " :";
				cin >> v2[i];
			}
			
			cout << "La solucion de multiplicar los vectores es " << multiplicarVectores(v1,v2,memoria) << endl;
			break;
		}
		case 7 : {
			int filas, columnas;
			
			do{
				cout << "Introduzca filas ";
				cin >> filas;
				cout << "Introduzca columnas ";
				cin >> columnas;
			}while(filas < 0 && columnas < 0);
			
			float m1[filas][columnas], m2[filas][columnas], matrizResultado[filas][columnas];
			
			for(int i = 0; i < filas; i++){
				cout << "Introducir valor en fila " << i+1 << " ";
				for(int j = 0; j < columnas; j++){
					cout << "y en columna " << j+1 << " ";
					cin >> m1[i][j];
				}
			}
			cout << endl << "Ahora introducir los valores de la matriz 2 " << endl;
			cout << endl; //Doble para que quede mas bonito en el cmd.
			
			for(int i = 0; i < filas; i++){
				cout << "Introducir valor en fila " << i+1 << " ";
				for(int j = 0; j < columnas; j++){
					cout << "y en columna " << j+1 << " ";
					cin >> m2[i][j];
				}
			}
			
			sumaDosMatrices(&m1[0][0], &m2[0][0], &matrizResultado[0][0], filas, columnas);
			
			cout << "La matriz resultante despues de las sumas de las otras dos matrices es: " << endl;
			
			for(int i = 0; i < filas; i++){
				for(int j = 0; j < columnas; j++){
					cout << matrizResultado[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}
		default : {
			cout << "No existe case.";
			break;
		}
	}
	return 0;
}