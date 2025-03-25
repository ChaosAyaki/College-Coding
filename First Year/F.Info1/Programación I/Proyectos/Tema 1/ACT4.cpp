/*
Realizado por: Pablo Dominguez Corbacho
Fecha:19/09/2024

Descripcion: Es un programa que calcula la hipotenusa de un triangulo rectangulo.
El programa pide al usuario los dos catetos de tipo real y mostrar por pantalla el resultado.

*/

#include <iostream>
#include <cmath>

using namespace std;

int main (){

 int Catetopuest, Catetocont;
 
 cout << "Introduzca el cateto opuesto:" << endl;
 cin >> Catetopuest;
 cout << "Introduzca el cateto contiguo:" << endl;
 cin >> Catetocont;
 
 double Hipotenusa= sqrt(Catetopuest * Catetopuest + Catetocont * Catetocont );
 
 cout << "La Hipotenusa es:" << Hipotenusa << endl;
 
  return 0;
}