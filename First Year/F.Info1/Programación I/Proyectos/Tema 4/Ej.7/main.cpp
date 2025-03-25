#include "cab.h"

int main() {
    const int MAX_SIZE = 100;
    int vector[MAX_SIZE];
    int n;

    cout << "Introduce el número de elementos del vector: ";
    cin >> n;

    leerVector(vector, n);
    cout << "Vector original: ";
    mostrarVector(vector, n);

    invertirVector(vector, n);

    cout << "Vector invertido: ";
    mostrarVector(vector, n);

    return 0;
}
