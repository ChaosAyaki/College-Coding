#include "cab.h"

int main() {
    int matriz[100][100], filas, columnas, fila, k;

    cout << "Introduce el numero de filas: ";
    cin >> filas;
    cout << "Introduce el numero de columnas: ";
    cin >> columnas;

    leerMatriz(matriz, filas, columnas);

    cout << "Matriz original:" << endl;
    mostrarMatriz(matriz, filas, columnas);

    cout << "Introduce el numero de la fila a rotar (0-indexada): ";
    cin >> fila;
    cout << "Introduce el numero de posiciones a rotar hacia la derecha: ";
    cin >> k;

    rotarFila(matriz, columnas, fila, k);

    cout << "Matriz tras rotar la fila " << fila << ":" << endl;
    mostrarMatriz(matriz, filas, columnas);

    return 0;
}
