/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 20/11/2024

Descripcion: Codifique una funcion en C++ que calcule el factorial de un numero dado por teclado.
Posteriormente, implementar una funcion que calcule el numero combinatorio haciendo
uso de la funcion factorial definida previamente.

*/

#include "cab.h"

int main() {
    int n, k;

    cout << "Introduce n: ";
    cin >> n;
    cout << "Introduce k: ";
    cin >> k;

    cout << "Factorial de " << n << ": " << factorial(n) << endl;
    cout << "Combinatorio (" << n << " sobre " << k << "): " << combinatorio(n, k) << endl;

    return 0;
}
