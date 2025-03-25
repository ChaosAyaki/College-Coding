/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 14/11/2024

Descripcion: Escriba un programa que utilizando la siguiente estructura para representar matrices,
lea una matriz, la muestre por pantalla y calcule la suma de los elementos que hay por
debajo de su diagonal principal. Si la matriz no es cuadrada no se realizara ninguna 
operacion. 
1 struct matriz{
2 int nFil;
3 int nCol;
4 int m[100][100];
5 }

*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;
	
struct matriz {
    int nFil;
    int nCol;
    int m[DIM_MAX][DIM_MAX];
	
};

int main() {
	
    int suma = 0;
	matriz mat;

    cout << "Ingrese el numero de filas: "<< endl;
    cin >> mat.nFil;
    cout << "Ingrese el numero de columnas: "<< endl;
    cin >> mat.nCol;

    if (mat.nFil != mat.nCol) {
        cout << "La matriz no es cuadrada, no se realizaran operaciones." << endl;
        return 0;
    }

    cout << "Ingrese los elementos de la matriz:"<< endl;
    for (int i = 0; i < mat.nFil; i++) {
        for (int j = 0; j < mat.nCol; j++) {
            cout << "Elemento [" << i << "][" << j << "]: "<< endl;
            cin >> mat.m[i][j];
        }
    }

    cout << "Matriz ingresada:"<< endl;
    for (int i = 0; i < mat.nFil; i++) {
        for (int j = 0; j < mat.nCol; j++) {
            cout << mat.m[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 1; i < mat.nFil; i++) {
        for (int j = 0; j < i; j++) {
            suma += mat.m[i][j];
        }
    }

    cout << "Suma de los elementos por debajo de la diagonal principal: " << suma << endl;
	
	 return 0;
}