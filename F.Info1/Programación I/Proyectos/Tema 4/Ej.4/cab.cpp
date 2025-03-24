#include "cab.h"

bool esPrimo(int numero) {
    if (numero <= 1) return false;
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) return false;
    }
    return true;
}

void mostrarPrimos(int inicio, int fin) {
    cout << "Números primos entre " << inicio << " y " << fin << ":" << endl;
    for (int i = inicio; i <= fin; ++i) {
        if (esPrimo(i)) cout << i << " ";
    }
    cout << endl;
}
