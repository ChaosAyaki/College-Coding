/*
Realizado por: Pablo Dominguez Corbacho
Fecha:24/09/2024

Descripcion: Es un programa que dado un numero de semanas calcula el numero de
kilos desperdiciados. Datos de la Agenda 2030.

*/

#include <iostream>
using namespace std;

int main () {

 int Semanas;
 const float Desperdicios=23'6;

 cout<< "Introduce el numero de semanas:"<< endl;
 cin>> Semanas;

 cout<< "Desperdicio Total:"<< Semanas*Desperdicios<<" "<< "Millones de Kg en comida"<< endl;

  return 0;
}