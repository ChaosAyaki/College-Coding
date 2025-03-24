/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 14/11/2024

Descripcion: Implemente un programa haciendo uso de estructuras, que lea un vector de numeros
complejos y calcule el complejo media de todos ellos. El programa realizara secuencialmente las siguientes operaciones:

1. Leer los numeros complejos en un vector. 
2. Mostrar los numeros complejos introducidos por teclado. 
3. Sumar los numeros complejos del vector. 
4. Calcular la media a partir de la suma anterior

*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;
	
    struct Comp {
    double real, imag;
};

int main() {
    int n;
    Comp vect[DIM_MAX];

    cout << "Ingrese la cantidad de numeros complejos: "<< endl;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Numero complejo " << i + 1 << ":"<< endl;
        cout << "Parte real: ";
        cin >> vect[i].real;
        cout << "Parte imaginaria: ";
        cin >> vect[i].imag;
    }

    cout << "Numeros complejos introducidos:"<< endl;
    for (int i = 0; i < n; i++) {
        cout << "Complejo " << i + 1 << ": " << vect[i].real << " + " << vect[i].imag << "i" << endl;
    }

    Comp suma = {0, 0};
    for (int i = 0; i < n; i++) {
        suma.real += vect[i].real;
        suma.imag += vect[i].imag;
    }

    Comp med = {suma.real / n, suma.imag / n};

    cout << "Suma de los numeros complejos: " << suma.real << " + " << suma.imag << "i" << endl;
    cout << "Media de los numeros complejos: " << med.real << " + " << med.imag << "i" << endl;
	
	 return 0;
}