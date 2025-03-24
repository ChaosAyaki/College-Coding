/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 07/11/2024

Descripcion: Codifique un programa que permita invertir los elementos de un vector. Se podra hacer 
usando un vector auxiliar o no, pero en cualquier caso, al final el vector original tiene
que quedar invertido.

*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;

int main () {
	
	int vect [DIM_MAX];
	int aux[DIM_MAX];
	int n;
    
	cout << "Ingrese la cantidad de elementos en el vector (maximo " << DIM_MAX << "): ";
    cin >> n;
    
    if (n > DIM_MAX) {
        cout << "La cantidad de elementos excede el tamano maximo permitido." << endl;
        return 1;
    }

    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vect[i];
    }

    for (int i = 0; i < n; i++) {
        aux[i] = vect[n - 1 - i];
    }

    for (int i = 0; i < n; i++) {
        vect[i] = aux[i];
    }

    cout << "Vector invertido usando vector auxiliar:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vect[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < n / 2; i++) {
        int temp = vect[i];
        vect[i] = vect[n - 1 - i];
        vect[n - 1 - i] = temp;
    }

    cout << "Vector invertido sin usar vector auxiliar:" << endl;
    for (int i = 0; i < n; i++) {
        cout << vect[i] << " ";
    }
    cout << endl;

	
	 return 0;
}