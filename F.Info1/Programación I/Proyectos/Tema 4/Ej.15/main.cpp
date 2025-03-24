#include "cab.h"

int main() {

    Complejo vector[MAX_COMPLEJOS];
    int n;

    cout << "Introduce el numero de numeros complejos: ";
    cin >> n;

    leerVectorComplejos(vector, n);
    mostrarVectorComplejos(vector, n);

    Complejo suma = sumarComplejos(vector, n);
    Complejo media = calcularMediaComplejos(suma, n);

    cout << "Suma de los numeros complejos: ";
    mostrarComplejo(suma);

    cout << "Media de los numeros complejos: ";
    mostrarComplejo(media);

    return 0;
}
