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

void intercambiarFilas(int matriz[][100], int fila1, int fila2, int columnas) {
    for (int j = 0; j < columnas; ++j) {
        swap(matriz[fila1][j], matriz[fila2][j]);
    }
}
