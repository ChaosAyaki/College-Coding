#include "Cabecera.h"
#include <iostream>
#include <cmath>
#include <string>
#define MAX_DIM 100

using namespace std;

struct Matriz{
	
	int nfilas;
	int ncolum;
	int m [MAX_DIM][MAX_DIM];
};

int main () {
	
	Matriz n;
	int suma= 0;
	int mult= 0;
	int div= 0;
	
	cout<< "Introduce el numero de filas: "<< endl;
	cin>> n.nfilas;
	
	cout<< "Introduce el nimero de columnas"<< endl;
	cin>> n.ncolum;
	
	if (n.nfilas != n.ncolum){
		
		
		cout<< "La matriz no es cuadrada por lo tanto no se puede operar"<< endl;
		
		return 0;
	}
	
	cout<< "Ingrese los elementos de la matriz:"<< endl;
	
	for (int i=0; i< n.nfilas; i++){
		for (int j=0; j< n.ncolum; j++){
			cout<< "Elemento["<< i <<"]"<< "["<< j<<"]:"<< endl;
			cin>> n.m [i][j];
			
		}
	}
	
	// Sumar la matriz
	
	for( int i= 0; i< n.nfilas; i++){
		for(int j=0; j< n.ncolum; j++){
			
			suma += n.m [i][j];
		}
	}
	
	cout<< "La suma de la matriz es:"<< suma << endl;
	
	
	 return 0;
}