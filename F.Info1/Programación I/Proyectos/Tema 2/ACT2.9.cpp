/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 12/10/2024

Descripcion: Es un programa que lee un numero entero que representa un dıa de la
semana 1: Lunes, 2: Martes... Si el numero introducido no esta en el rango [1,7], entonces
el programa informa del error al usuario (imprimiendo un mensaje de error), y acaba.
Si el numero esta en el rango, el programa debera imprimir por pantalla el dıa al que
corresponde. Realice dos versiones del programa, haciendo uso del switch y del if-else.


*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int dia;
	
    cout<< "Introduzca un dia de la semana del [1-7]:"<< endl;
	cin>> dia;
	
	cout<<" "<< endl;
	
	switch (dia) {
	    case 1: cout<< " Has elegido el Lunes"<< endl;
		 break;
        case 2: cout<< " Has elegido el Martes"<< endl;
		 break;
        case 3: cout<< " Has elegido el Miercoles"<< endl;
		 break;
        case 4: cout<< " Has elegido el Jueves"<< endl;
		 break;
        case 5: cout<< " Has elegido el Viernes"<< endl;
		 break;
        case 6: cout<< " Has elegido el Sabado"<< endl;
		 break;
        case 7: cout<< " Has elegido el Domingo"<< endl;
          break;
		  
	default: cout<< "Error, dia invalido"<< endl;
	}
	
	 return 0;
}