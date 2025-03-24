#include "cab.h"

void leerMatriz(Matriz &matriz) {
    cout << "Introduce el numero de filas: ";
    cin >> matriz.nFil;
    cout << "Introduce el numero de columnas: ";
    cin >> matriz.nCol;

    for (int i = 0; i < matriz.nFil; ++i) {
        for (int j = 0; j < matriz.nCol; ++j) {
            cout << "Introduce el elemento [" << i << "][" << j << "]: ";
            cin >> matriz.m[i][j];
        }
    }
}

void mostrarMatriz(const Matriz &matriz) {
    for (int i = 0; i < matriz.nFil; ++i) {
        for (int j = 0; j < matriz.nCol; ++j) {
            cout << matriz.m[i][j] << " ";
        }
        cout << endl;
    }
}

int sumaDebajoDiagonal(const Matriz &matriz) {
    if (matriz.nFil != matriz.nCol) return -1;

    int suma = 0;
    for (int i = 1; i < matriz.nFil; ++i) {
        for (int j = 0; j < i; ++j) {
            suma += matriz.m[i][j];
        }
    }
    return suma;
}
