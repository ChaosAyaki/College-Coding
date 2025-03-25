/*
Realizado por: Pablo Dominguez Corbacho
Fecha:24/09/2024

Descripcion:El programa pide el nombre de una persona, los apellidos y el ano de nacimiento,
calcula la edad de la persona y muestra un mensaje del tipo ”Hola Pablo Dominguez, tienes 18 anos”. 
*/

#include <iostream>
using namespace std;

int main () {

 int Ano,AnoActual;
 string Nombre;

 AnoActual=2024;

 cout<< "Escriba su nonbre completo:"<< endl;
 getline(cin,Nombre);

 cout<< "Escriba su ano de nacimiento:"<< endl;
 cin>> Ano;

 cout<< "Hola"<<" " << Nombre<<" " << "Tienes"<<" " << AnoActual-Ano<< " "<< "Anos"<< endl;

  return 0;
}