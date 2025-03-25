#include "cab.h"

int main() {

    int vector[TAM_MAX];
    int n;

    do {
        cout << "Introduce el numero de elementos (maximo 100): ";
        cin >> n;
    } while (n <= 0 || n > TAM_MAX);

    leerVector(vector, n);

    mostrarVector(vector, n);
    cout << "Suma: " << sumaVector(vector, n) << endl;
    cout << "Media: " << mediaVector(vector, n) << endl;
    cout << "Varianza: " << varianzaVector(vector, n) << endl;
    cout << "Maximo: " << maximoVector(vector, n) << endl;
    cout << "Minimo: " << minimoVector(vector, n) << endl;

    return 0;
}
