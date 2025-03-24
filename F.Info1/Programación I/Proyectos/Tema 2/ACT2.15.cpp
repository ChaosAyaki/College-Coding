/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 14/10/2024

Descripcion: Implementa un programa que determine si un numero dado por el usuario es o no un numero primo.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
   int num;
   bool prim;
   
   prim= true;
	
	cout<< "Introduce un numero: ";
    cin>> num;

   if (num <= 1) {
        prim= false;
		
   }
   
   else {
	   
	   for (int i= 2; i< num -1; i++) {
            if (num % i == 0) {
                prim= false; 
                return 0;
            }
        }
   }
   

   if (prim) {
        cout << num << " es un numero primo" << endl;
    } 
	
	else {
        cout << num << " no es un numero primo" << endl;
    }
	
	 return 0;
}