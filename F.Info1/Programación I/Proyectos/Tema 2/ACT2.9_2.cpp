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
	
	if (dia == 1){
		
		cout<< " Has elegido el Lunes"<< endl;
	}
	else if (dia == 2){
		
		cout<< " Has elegido el Martes"<< endl;
	}
	else if (dia == 3){
		
		cout<< " Has elegido el Miercoles"<< endl;
	}
	else if (dia == 4){
		
		cout<< " Has elegido el Jueves"<< endl;
	}
	else if (dia == 5){
		
		cout<< " Has elegido el Viernes"<< endl;
	}
	else if (dia == 6){
		
		cout<< " Has elegido el Sabado"<< endl;
	}
	else if (dia == 7){
		
		cout<< " Has elegido el Domingo"<< endl;
	}
	else {
		
		cout<< "Error, dia invalido"<< endl;
	}
	
	 return 0;
}