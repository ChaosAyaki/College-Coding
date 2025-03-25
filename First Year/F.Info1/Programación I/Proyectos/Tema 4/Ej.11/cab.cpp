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

void calcularMediaColumnas(int matriz[][100], int filas, int columnas, double medias[]) {
    for (int j = 0; j < columnas; ++j) {
        int suma = 0;
        for (int i = 0; i < filas; ++i) {
            suma += matriz[i][j];
        }
        medias[j] = static_cast<double>(suma) / filas;
    }
}
