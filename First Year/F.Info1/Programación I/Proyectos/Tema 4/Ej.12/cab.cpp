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

void rotarFila(int matriz[][100], int columnas, int fila, int k) {
    k = k % columnas;
    if (k < 0) k += columnas;

    int temp[100];
    for (int j = 0; j < columnas; ++j) {
        temp[(j + k) % columnas] = matriz[fila][j];
    }

    for (int j = 0; j < columnas; ++j) {
        matriz[fila][j] = temp[j];
    }
}
