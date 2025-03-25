#include "cab.h"

int main() {
    int matriz[100][100], filas, columnas;
    double medias[100];

    cout << "Introduce el numero de filas: ";
    cin >> filas;
    cout << "Introduce el numero de columnas: ";
    cin >> columnas;

    leerMatriz(matriz, filas, columnas);
    cout << "Matriz original:" << endl;
    mostrarMatriz(matriz, filas, columnas);

    calcularMediaColumnas(matriz, filas, columnas, medias);
    cout << "Media de las columnas: ";
    for (int j = 0; j < columnas; ++j) {
        cout << medias[j] << " ";
    }
    cout << endl;

    return 0;
}
