/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 14/10/2024

Descripcion: Disena e implementa un programa que calcule el producto de los dıgitos de un numero
entero leıdo por teclado. Ejemplo, si el numero fuera 48, el producto serıa 32.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int num, pro, dig;
	
	pro=1;
	
	cout<< "Introduce un numero:"<< endl;
	cin>> num;
	
	 while (num != 0) {
     dig = num % 10;
        pro *= dig;
        num /= 10;
    }
	
	cout << "El producto de los digitos es: " << pro << endl;
	
	 return 0;
}