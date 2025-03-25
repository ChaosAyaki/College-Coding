/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 14/11/2024

Descripcion: Implemente un programa que busque un elemento indicado por el usuario 
en una matriz de m filas y n columnas. El programa devolvera la fila y la columna 
donde se encuentre el elemento a buscar o -1, -1 si no se ha encontrado dicho elemento.


*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;

int main () {
	
int m, n, elem;
int fila = -1, colum = -1;
int matriz[DIM_MAX][DIM_MAX];
    
    cout << "Ingrese el numero de filas (m): ";
    cin >> m;
    cout << "Ingrese el numero de columnas (n): ";
    cin >> n;
    
    if (m > DIM_MAX || n > DIM_MAX) {
        cout << "Error: Las dimensiones de la matriz exceden el limite permitido." << endl;
        return 1;
    }

    cout << "Ingrese los elementos de la matriz:";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }


    cout << "Ingrese el elemento a buscar: ";
    cin >> elem;


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == elem) {
                fila = i;
                colum = j;
                break;
            }
        }
        if (fila != -1) break; 
    }

    if (fila != -1) {
        cout << "Elemento encontrado en la posicion: Fila " << fila << ", Columna " << colum << endl;
    } else {
        cout << "Elemento no encontrado, devuelve: -1, -1" << endl;
    }
	
	 return 0;
}