/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 16/10/2024

Descripcion: Codificar un programa en C++ que calcule el factorial de un numero dado por teclado.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int resul, n;
	
	resul= 1;
	
	cout<< "Introduce un numero:"<< endl;
	cin>> n;
	
	cout<< endl;
	
	for ( int i=1; i <= n; i++) {
		
		resul*= i;
	}
	
	cout << "El factorial de los numeros de 1 a"<< " " << n << " es: " << resul << endl;
	
	 return 0;
}