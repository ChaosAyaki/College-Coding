/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 12/10/2024

Descripcion: Escribe y disena un programa que lea numeros por teclado hasta que se introduzca un -1. 
El programa mostrara por pantalla el numero de pares e impares leıdos.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int i, par, imp;
	
	 cout << "Introduce numeros (introduce -1 para terminar):" << endl;
    
    while (true) {
        cin>> i;

        if (i == -1) {
            break;
        }

        if (i % 2 == 0) {
            par++;
        } 
		
		else {
            imp++;
        }
    }
	
	cout << "Cantidad de numeros pares: " << par << endl;
    cout << "Cantidad de numeros impares: " << imp << endl;
	
	 return 0;
}