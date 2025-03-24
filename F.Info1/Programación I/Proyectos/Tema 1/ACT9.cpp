/*
Realizado por: Pablo Dominguez Corbacho
Fecha:24/09/2024

Descripcion: Es un programa que dado un numero n calcula el resultado de una funcion

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

int n;

cout<< "Introduzca un numero"<< endl;
cin>> n;

double Resultado=(abs(n*n*n)*log(n*n))/sqrt(n*n*n);
cout<< "El resultado es:"<< Resultado<< endl;

 return 0;
}