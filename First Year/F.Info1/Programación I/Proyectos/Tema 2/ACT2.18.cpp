/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 16/10/2024

Descripcion: Codificar un programa que calcule la media aritmetica y la media geometrica de un
conjunto de numeros reales pedidos por teclado. Nota: a priori no se sabe cuantos elementos tendra el conjunto, 
con lo que el programa pedira numeros hasta que el usuario quiera.


*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int x, i, cont;
	float ma, mg, suma, prod;

	i=0;
	cont=0;
	suma=0;
	prod= 1;

	do {
		
		cout<< "Introduce un numero positivo, si quiere parar introduce -1 :"<< endl;
	    cin>> x;
		if (x>=0){
			
			cont++;
			suma= suma+x;
			prod *= x;
		}
		
	} while ( x>0);
	
	ma= suma / cont;
	
	mg= pow ( prod,1/(float)cont);
	
	cout<< "La media aritmetica es:"<< " "<< ma <<endl;
	cout<< "La media geometrica es:"<< " "<< mg <<endl;
	
	 return 0;
}