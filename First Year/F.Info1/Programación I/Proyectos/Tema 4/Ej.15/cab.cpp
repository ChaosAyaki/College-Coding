#include "cab.h"

void leerVectorComplejos(Complejo vector[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Introduce la parte real del número " << i + 1 << ": ";
        cin >> vector[i].real;
        cout << "Introduce la parte imaginaria del número " << i + 1 << ": ";
        cin >> vector[i].imaginario;
    }
}

void mostrarVectorComplejos(const Complejo vector[], int n) {
    cout << "Números complejos introducidos:" << endl;
    for (int i = 0; i < n; ++i) {
        mostrarComplejo(vector[i]);
    }
}

Complejo sumarComplejos(const Complejo vector[], int n) {
    Complejo suma = {0, 0};
    for (int i = 0; i < n; ++i) {
        suma.real += vector[i].real;
        suma.imaginario += vector[i].imaginario;
    }
    return suma;
}

Complejo calcularMediaComplejos(const Complejo suma, int n) {
    Complejo media;
    media.real = suma.real / n;
    media.imaginario = suma.imaginario / n;
    return media;
}

void mostrarComplejo(const Complejo c) {
    cout << c.real << " + " << c.imaginario << "i" << endl;
}
