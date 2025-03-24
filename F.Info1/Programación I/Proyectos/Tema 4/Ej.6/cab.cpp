#include "cab.h"

void leerVector(int vector[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Introduce el elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
}

void mostrarVector(int vector[], int n) {
    cout << "Elementos del vector: ";
    for (int i = 0; i < n; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int sumaVector(int vector[], int n) {
    int suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += vector[i];
    }
    return suma;
}

double mediaVector(int vector[], int n) {
    return static_cast<double>(sumaVector(vector, n)) / n;
}

double varianzaVector(int vector[], int n) {
    double media = mediaVector(vector, n);
    double suma = 0;
    for (int i = 0; i < n; ++i) {
        suma += (vector[i] - media) * (vector[i] - media);
    }
    return suma / n;
}

int maximoVector(int vector[], int n) {
    int maximo = vector[0];
    for (int i = 1; i < n; ++i) {
        if (vector[i] > maximo) {
            maximo = vector[i];
        }
    }
    return maximo;
}

int minimoVector(int vector[], int n) {
    int minimo = vector[0];
    for (int i = 1; i < n; ++i) {
        if (vector[i] < minimo) {
            minimo = vector[i];
        }
    }
    return minimo;
}
