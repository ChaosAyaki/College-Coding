#include "cab.h"

int main() {
    int matriz[100][100], filas, columnas, fila1, fila2;

    cout << "Introduce el numero de filas: ";
    cin >> filas;
    cout << "Introduce el numero de columnas: ";
    cin >> columnas;

    leerMatriz(matriz, filas, columnas);
    cout << "Matriz original:" << endl;
    mostrarMatriz(matriz, filas, columnas);

    cout << "Introduce las filas a intercambiar (0-indexadas): ";
    cin >> fila1 >> fila2;
    intercambiarFilas(matriz, fila1, fila2, columnas);

    cout << "Matriz tras el intercambio:" << endl;
    mostrarMatriz(matriz, filas, columnas);

    return 0;
}
