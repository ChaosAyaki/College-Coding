/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 03/10/2024

Descripcion: Es un programa que lee un numero real e imprime la raız cuadrada del mismo. 
Como la raız solo esta definida para numeros positivos, si el numero introducido es negativo, 
el programa no calcula la raız e imprime por pantalla un mensaje de error.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int real, raiz;
	
	cout<< "Introduce un Numero"<< endl;
	cin>> real;
	
	if (real>=0){
	
	raiz= sqrt ( real );
	
	cout<< "La raiz es:"<< " "<< raiz<< endl;
}

    else{
	cout<< "Error no se puede hacer raices de numeros negativos"<< endl;
}
	
	 return 0;
}