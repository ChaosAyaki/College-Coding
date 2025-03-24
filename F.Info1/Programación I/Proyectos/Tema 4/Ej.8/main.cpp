#include "cab.h"

int main() {
    const int MAX_GRADO = 100;
    double polinomio[MAX_GRADO];
    int grado;
    double x;

    cout << "Introduce el grado del polinomio: ";
    cin >> grado;

    leerPolinomio(polinomio, grado);
    mostrarPolinomio(polinomio, grado);

    cout << "Introduce el valor de x para evaluar el polinomio: ";
    cin >> x;
    cout << "El resultado es: " << evaluarPolinomio(polinomio, grado, x) << endl;

    return 0;
}
