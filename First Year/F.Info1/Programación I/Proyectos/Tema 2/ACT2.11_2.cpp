/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 12/10/2024

Descripcion: Escribe un programa que escriba los numeros del 1 al 100 en lıneas de 10 numeros. Despues de 100 el programa debe escribir 
”Fin del programa” en una lınea nueva. Implementa 3 versiones diferentes, cada una con un tipo de bucle diferente (while, do-while,for).

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int i = 1;
    int time= 0;

    do {
        cout<< i << endl;
        i++;
        time++;

        if (time == 10) {
            cout<< endl;
            time= 0;
        }
    } while (i<= 100);

    cout << "Fin del programa" << endl;
    return 0;
}
