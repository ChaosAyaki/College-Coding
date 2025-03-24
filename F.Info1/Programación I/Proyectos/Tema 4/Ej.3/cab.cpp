#include "cab.h"

int potencia(int base, int exponente) {
    int resultado = 1;
    for (int i = 0; i < exponente; ++i) {
        resultado *= base;
    }
    return resultado;
}

void mostrarPotencias(int base, int n) {
    for (int i = 1; i <= n; ++i) {
        cout << base << "^" << i << " = " << potencia(base, i) << endl;
    }
}
