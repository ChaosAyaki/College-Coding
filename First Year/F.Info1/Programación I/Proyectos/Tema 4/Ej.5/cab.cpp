#include "cab.h"

bool esPerfecto(int numero) {
    int suma = 0;
    for (int i = 1; i < numero; ++i) {
        if (numero % i == 0) suma += i;
    }
    return suma == numero;
}

void mostrarPerfectos(int inicio, int fin) {
    cout << "Numeros perfectos entre " << inicio << " y " << fin << ":" << endl;
    for (int i = inicio; i <= fin; ++i) {
        if (esPerfecto(i)) cout << i << " ";
    }
    cout << endl;
}
