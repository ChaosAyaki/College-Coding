/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 16/10/2024

Descripcion: Codificar un programa en C++ que indique si un numero es perfecto. Se dice que un
numero es perfecto si es igual a la suma de sus divisores menores que ese numero. Por
ejemplo, 6 es perfecto ya que 6 = 1+2+3, 28 es perfecto ya que 28 = 1 + 2 + 4 + 7 + 14.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int x, suma;
	
	suma= 0;
	
	cout<< "Escribe un numero:"<< endl;
	cin>> x;
	
	  for (int i = 1; i <= x / 2; i++) {
        if (x % i == 0) {
            suma += i;
        }
    }

	
	if( suma == x ) {
		
		cout<< "El numero es perfecto"<< endl;
	}
	
	else {
		
		cout<< "El numero no es perfecto"<< endl;
	}
	
	 return 0;
}