#include "cab.h"

void leerPolinomio(double polinomio[], int grado) {
    for (int i = 0; i <= grado; ++i) {
        cout << "Coeficiente de x^" << i << ": ";
        cin >> polinomio[i];
    }
}

void mostrarPolinomio(double polinomio[], int grado) {
    cout << "Polinomio: ";
    for (int i = grado; i >= 0; --i) {
        if (i != grado) cout << " + ";
        cout << polinomio[i] << "x^" << i;
    }
    cout << endl;
}

double evaluarPolinomio(double polinomio[], int grado, double x) {
    double resultado = 0;
    for (int i = 0; i <= grado; ++i) {
        resultado += polinomio[i] * pow(x, i);
    }
    return resultado;
}
