/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 12/10/2024

Descripcion: Calcule el precio venta publico en rebajas de un producto a partir de su precio antiguo,
sabiendo que si el precio antiguo es menor que 10 euros, se le descuenta un 5 %, si esta
comprendido entre 10 y 30 euros se le descuenta un 7 %, si esta comprendido entre 30 y 
50 euros se le descuenta un 8 %, y si es mayor que 50 euros se le descuenta un 10 %.


*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    float precioA, precioN, des;
	
	cout << "Introduce el precio antiguo del producto: ";
	cin>> precioA
	
	if (precioA < 10) {
        des = 0.05;
	}
	 else if (precioA >= 10 && precioA <= 30) {
        des = 0.07;
	 }
	 else if (precioA >= 30 && precioA <= 50) {
        des = 0.08;
	 }
	 else {
        des = 0.10;
	 }
	 
	  precioN = precioA - (precioA * des);
	  
	   cout << "El precio nuevo con el descuento es: " << precioN << " euros" << endl;
	
	 return 0;
}