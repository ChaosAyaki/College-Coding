/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 11/10/2024

Descripcion: Implementa un algoritmo que determine las soluciones (reales o imaginarias) de una
ecuacion de segundo grado para cualquier valor de a, b y c. Hay que tener en cuenta
que cuando a es igual a 0 no vale la formula general y se tendrıa una ecuacion de primer 
grado, y que cuando a y b son 0 no hay solucion. 

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    float a, b, c, x1, x2, x, Calc;
	
	cout<< "Introduzca un valor para 'a' "<< endl;
	cin>> a;
	cout<< "Introduzca un valor para 'b' "<< endl;
	cin>> b;
	cout<< "Introduzca un valor para 'c' "<< endl;
	cin>> c;
	
	 if (a == 0) {
        
        if (b == 0) {
           
		   if (c == 0) {
                cout<< "La ecuacion tiene infinitas soluciones." << endl;
            } 
			
			else {
                cout<< "No hay solucion." << endl;
            }
        } 
		else {
            x = -c / b;
            cout<< "La solucion es: " << x << endl;
        }
    } 
	
	else {
	
	 Calc = b*b - 4*a*c;
	 
        if (Calc > 0) {
            x1 = (-b + sqrt(Calc)) / (2*a);
            x2 = (-b - sqrt(Calc)) / (2*a);
            
			cout<< "La solucion 1 es: " << x1 << endl;
            cout<< "La solucion 2 es: " << x2 << endl;
        } 
		else if (Calc == 0) {
            x1 = -b / (2*a);
			
            cout<< "La unica solucion es: " << x1 << endl;
        } 
		
		else {
            cout<< "No hay soluciones reales." << endl;
        }
	}
	
	 return 0;
}