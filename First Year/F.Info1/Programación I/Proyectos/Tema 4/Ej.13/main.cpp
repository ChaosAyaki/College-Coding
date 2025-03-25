#include "cab.h"

int main() {
    int matriz[100][100], filas, columnas, elemento, fila, columna;

    cout << "Introduce el numero de filas: ";
    cin >> filas;
    cout << "Introduce el numero de columnas: ";
    cin >> columnas;

    leerMatriz(matriz, filas, columnas);

    cout << "Matriz original:" << endl;
    mostrarMatriz(matriz, filas, columnas);

    cout << "Introduce el elemento a buscar: ";
    cin >> elemento;

    if (buscarElemento(matriz, filas, columnas, elemento, fila, columna)) {
        cout << "Elemento encontrado en la posicion [" << fila << "][" << columna << "]" << endl;
    } else {
        cout << "Elemento no encontrado." << endl;
    }

    return 0;
}
