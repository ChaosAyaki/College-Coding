#include "cab.h"

void anadirElemento(int vector[], int n, int elemento, int maxSize) {
    if (n < maxSize) {
        vector[n++] = elemento;
    } else {
        cout << "El vector esta lleno." << endl;
    }
}

void eliminarElemento(int vector[], int n, int posicion) {
    if (n > 0 && posicion >= 0 && posicion < n) {
        for (int i = posicion; i < n - 1; ++i) {
            vector[i] = vector[i + 1];
        }
        --n;
    } else {
        cout << "Posicion invalida o vector vacio." << endl;
    }
}

void mostrarVector(int vector[], int n) {
    cout << "Vector: ";
    for (int i = 0; i < n; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int contarDivisoresDe5(int vector[], int n) {
    int contador = 0;
    for (int i = 0; i < n; ++i) {
        if (vector[i] % 5 == 0) 
		++contador;
    }
    return contador;
}
