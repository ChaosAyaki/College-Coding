/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 14/11/2024

Descripcion: Escriba un programa que lea las dimensiones de una matriz de m filas y n columnas
e intercambie dos filas, a y b cualesquiera. El programa debe mostrar la matriz antes y
despues del intercambio.

*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;

int main () {
	
  int m, n;
    
  
    cout << "Ingrese el numero de filas (m): "<< endl;
    cin >> m;
    cout << "Ingrese el numero de columnas (n): "<< endl;
    cin >> n;
    
   
    int matriz[m][n];
    cout << "Ingrese los elementos de la matriz:"<< endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: "<< endl;
            cin >> matriz[i][j];
        }
    }
    
  
    cout << "Matriz antes del intercambio:"<< endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
 
    int a, b;
    cout << "Ingrese el numero de la primera fila a intercambiar (0 a " << m-1 << "): "<< endl;
    cin >> a;
    cout << "Ingrese el numero de la segunda fila a intercambiar (0 a " << m-1 << "): "<< endl;
    cin >> b;
    
   
    if (a >= 0 && a < m && b >= 0 && b < m) {
     
        for (int j = 0; j < n; j++) {
            int temp = matriz[a][j];
            matriz[a][j] = matriz[b][j];
            matriz[b][j] = temp;
        }
        
        cout << "Matriz despues del intercambio:"<< endl;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << matriz[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "Error: filas fuera de rango."<< endl;
    }
	
	 return 0;
}