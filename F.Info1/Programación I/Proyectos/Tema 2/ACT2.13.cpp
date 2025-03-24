/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 13/10/2024

Descripcion: Disena e implementa un programa que realice la multiplicacion de dos numeros mediante el metodo de las sumas sucesivas.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int x, y, resul, x_mas, y_mas;
	
	resul=0;
	
	cout<< "Introduce un numero:"<< endl;
	cin>> x;
	
	cout<< "Introduce otro numero:"<< endl;
	cin>> y;

    x_mas= abs(x);
    y_mas= abs(y);

    for (int i = 0; i < y_mas; i++) {
        resul += x_mas;
    }
	
    if ((x < 0 && y < 0) || (x > 0 && y > 0)) {
		
    } 
	
	else {
        resul = -resul;
    }
	

    cout<< "El resultado de " << x << " * " << y_mas << " usando sumas sucesivas es: " << resul << endl;

	
	 return 0;
}