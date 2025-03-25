/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 

Descripcion: Implemente una funcion que determine si un ano es o no bisiesto. Recuerde que son
bisiestos todos los anos cuya cifra es multiplo de 4 excepto los que siendo multiplos de
100 no lo son de 400. Ası 1900 no fue bisiesto, pero 2000 sı. Utilice dicha funcion para 
mostrar todos los anos bisiestos comprendidos entre dos anos introducidos por teclado.

*/

#include <iostream>
#include "Cab.h" 
using namespace std;

int main() {
    int ano;

    cout << "Introduce un año: ";
    cin >> ano;

    if (esBisiesto(ano)) {
        cout << ano << " es un año bisiesto." << endl;
    } else {
        cout << ano << " no es un año bisiesto." << endl;
    }

    return 0;
}
