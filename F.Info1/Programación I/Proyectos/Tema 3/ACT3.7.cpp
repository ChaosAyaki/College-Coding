/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 14/11/2024

Descripcion: Escribe un programa que rote k posiciones hacia la derecha los elementos de una fila f
de una matriz.

*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;

int main () {
	
int m, n, f, k;
int temp[DIM_MAX];
int matriz[DIM_MAX][DIM_MAX];
    
   
    cout << "Ingrese el numero de filas (m): " << endl;
    cin >> m;
    cout << "Ingrese el numero de columnas (n): " << endl;
    cin >> n;
    
   
    if (m > DIM_MAX || n > DIM_MAX) {
        cout << "Error: Las dimensiones de la matriz exceden el limite permitido." << endl;
        return 1;
    }

    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: " << endl;
            cin >> matriz[i][j];
        }
    }

    cout << "Ingrese la fila a rotar (0 a " << m - 1 << "): " << endl;
    cin >> f;
    cout << "Ingrese el numero de posiciones a rotar hacia la derecha: " << endl;
    cin >> k;

    if (f < 0 || f >= m) {
        cout << "Error: Fila fuera de rango." << endl;
        return 1;
    }

    k = k % n;

    for (int j = 0; j < n; j++) {
        temp[(j + k) % n] = matriz[f][j];
    }
    for (int j = 0; j < n; j++) {
        matriz[f][j] = temp[j];
    }

    
    cout << "Matriz despues de rotar la fila " << f << " " << k << " posiciones a la derecha:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
	
	 return 0;
}