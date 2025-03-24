/*
Realizado por: Pablo Dominguez Corbacho
Fecha:26/09/2024

Descripcion: Es un programa que tras pedir 2 numeros reales por pantalla muestra cual es el mayor de los dos. 

*/

#include <iostream>
using namespace std;

int main () {

float a,b;

cout<< "Escribe un valor para a:"<< endl;
cin>> a;

cout<< "Escribe un valor para b:"<< endl;
cin>> b;

if (a>=b){
	cout<< "a es mayor que b"<< endl;
}

else{
	cout<< "b es mayor que a"<< endl;
}


 return 0;
}