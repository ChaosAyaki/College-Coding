/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 14/11/2024

Descripcion: Dada una matriz de reales de m filas y n columnas, implemente un programa que calcule 
la media de los elementos de cada columna y las almacene en un vector de n elementos.

*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;

int main () {
	
 int m, n;
 double matriz[m][n], medias[n] = {0}, suma = 0;;

    cout << "Ingrese el numero de filas (m): " << endl;
    cin >> m;
    cout << "Ingrese el numero de columnas (n): " << endl;
    cin >> n;

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: " << endl;
            cin >> matriz[i][j];
        }
    }

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            suma += matriz[i][j];
        }
        medias[j] = suma / m;
    }

    cout << "Media de los elementos de cada columna:" << endl;
    for (int j = 0; j < n; j++) {
        cout << "Columna " << j << ": " << medias[j] << endl;
    }
	
	 return 0;
}