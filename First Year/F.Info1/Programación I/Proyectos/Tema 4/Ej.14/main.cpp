#include "cab.h"

int main() {
    Matriz matriz;

    leerMatriz(matriz);
    mostrarMatriz(matriz);

    int suma = sumaDebajoDiagonal(matriz);
    if (suma != -1) {
        cout << "Suma debajo de la diagonal principal: " << suma << endl;
    } else {
        cout << "La matriz no es cuadrada." << endl;
    }

    return 0;
}
