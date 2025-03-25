/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 16/10/2024

Descripcion: Codificar un programa que calcule la suma de los N primeros numeros, donde N es
un numero entero positivo que el usuario introducira por teclado. Despues de mostrar el resultado, 
comprobar con un esquema condicional que se cumple que la suma es ((1 + N) *N)/2, y que el programa muestre si se cumple o no se cumple.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int resul, n, form;
	
	resul= 0;
	
	cout<< "Introduce un numero positivo:"<< endl;
	cin>> n;
	
	cout<< endl;
	
	for ( int i=1; i <= n; i++) {
		
		resul+= i;
	}
	
	cout << "La suma de los numeros de 1 a"<< " " << n << " es: " << resul << endl;
	
	cout<< endl;
	
	form= (n * (n + 1)) / 2;
	
	if (form == resul) {
		
		cout<< "La suma ((1 + N) *N)/2 se cumple"<< endl;
	}
	
	else {
		
		cout<< "La suma ((1 + N) *N)/2 no se cumple"<< endl;
	}
	
	 return 0;
}