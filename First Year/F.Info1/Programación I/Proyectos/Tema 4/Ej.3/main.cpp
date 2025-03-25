#include "cab.h"

int main() {
    int base, n;

    cout << "Introduce la base: ";
    cin >> base;
    cout << "Introduce el número de potencias a calcular: ";
    cin >> n;

    mostrarPotencias(base, n);

    return 0;
}
