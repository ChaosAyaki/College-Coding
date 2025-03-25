/*
Realizado por: Pablo Dominguez Corbacho
Fecha:25/09/2024

Descripcion: Es un programa que calcula el precio medio de un producto que se vende en cuatro establecimientos
con cuatro precios y calcula su media. Ademas, se calcula cual es el porcentaje que supone el precio
en cada uno de los comercios con respecto al total.


*/

#include <iostream>
using namespace std;

// Solo funciona con Numeros enteros no he conseguido hacerlo con decimales

int main () {

float Prec1, Prec2, Prec3, Prec4,PrecTotal, Media, Porc1, Porc2, Porc3, Porc4;

cout<< "Introduce el 1*precio:"<< endl;
cin>> Prec1; 

cout<< "Introduce el 2*precio:"<< endl;
cin>> Prec2;

cout<< "Introduce el 3*precio:"<< endl;
cin>> Prec3;

cout<< "Introduce el 4*precio:"<< endl;
cin>> Prec4;

PrecTotal= float(Prec1 + Prec2 + Prec3 + Prec4);
Media= float ((PrecTotal)/4);

cout<< "La media de los precios es:"<< Media<< endl;

Porc1= float((Prec1)/PrecTotal)*100;
Porc2= float((Prec2)/PrecTotal)*100;
Porc3= float((Prec3)/PrecTotal)*100;
Porc4= float((Prec4)/PrecTotal)*100;

cout<< "El porcentaje de los precios a partir del total es:"<< endl;

cout<< Porc1<< "%"<< endl;
cout<< Porc2<< "%"<< endl;
cout<< Porc3<< "%"<< endl;
cout<< Porc4<< "%"<< endl;

 return 0;
}