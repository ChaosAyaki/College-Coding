#include "cab.h"

int main() {
    int inicio, fin;

    cout << "Introduce el inicio del rango: ";
    cin >> inicio;
    cout << "Introduce el final del rango: ";
    cin >> fin;

    mostrarPerfectos(inicio, fin);

    return 0;
}
