#include "cab.h"

void leerVector(int vector[], int n) {
    for (int i = 0; i < n; ++i) {
        cout << "Introduce el elemento " << i + 1 << ": ";
        cin >> vector[i];
    }
}

void mostrarVector(int vector[], int n) {
    cout << "Vector: ";
    for (int i = 0; i < n; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

void invertirVector(int vector[], int n) {
    for (int i = 0; i < n / 2; ++i) {
        int temp = vector[i];
        vector[i] = vector[n - i - 1];
        vector[n - i - 1] = temp;
    }
}
