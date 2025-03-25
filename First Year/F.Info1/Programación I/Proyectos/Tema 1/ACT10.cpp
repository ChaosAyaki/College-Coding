/*
Realizado por: Pablo Dominguez Corbacho
Fecha:24/09/2024

Descripcion: Es un programa que dado unos numeros enteros que denotan el sueldo
bruto mensual de un trabajador y el numero de anos en la empresa, obtenga el salario
mensual neto recibido por el trabajador teniendo en cuenta lo siguiente:
Se le descuenta un 15 % en impuestos del sueldo bruto.
Se le descuenta un 4.5 % de seguro medico.
Cada trabajador recibe una gratificacion mensual de 45 euros por cada trienio en
la empresa y 5 euros por cada ano en el tramo para el siguiente trienio.

*/

#include <iostream>
using namespace std;

int main () {

int Sueldobrut, Anos;

cout<<"Cual es tu sueldo bruto?:"<< endl;
cin>> Sueldobrut;

cout<<"Cuantos Anos llevas en la empresa?:"<< endl;
cin>> Anos;

int SueldoParc= Sueldobrut*(19'5/100);
int Trienio= Anos/3;
int AnosRest= Anos%3;

int Anospag= (Trienio*45)+(AnosRest*5);
int SueldoTotal= SueldoParc + Anospag;

cout<< "Su sueldo es de:"<< SueldoTotal<< endl;

 return 0;
}