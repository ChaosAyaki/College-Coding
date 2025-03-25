#include "cab.h"

void leerMatriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << "Introduce el elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz(int matriz[][100], int filas, int columnas) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

bool buscarElemento(int matriz[][100], int filas, int columnas, int elemento, int &fila, int &columna) {
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            if (matriz[i][j] == elemento) {
                fila = i;
                columna = j;
                return true; 
            }
        }
    }
    fila = -1;
    columna = -1;
    return false; 
}
