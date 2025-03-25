/*
Realizado por: Pablo Dominguez Corbacho
Fecha:19/09/2024

Descripcion:Es un programa que muestra por pantalla el tamano en bits de las variables de tipo
char, string, int, short, float, double y long double.

*/

#include <iostream>
using namespace std;

int main()
{

 cout << "Tamano de Char en bits:" << sizeof(char)*8 << endl; 
 cout << "Tamano de string en bits:" << sizeof(string)*8 << endl;
 cout << "Tamano de int en bits:" << sizeof(int)*8 << endl;
 cout << "Tamano de short en bits:" << sizeof(short)*8 << endl;
 cout << "Tamano de float en bits:" << sizeof(float)*8 << endl;
 cout << "Tamano de doble en bits:" << sizeof(double)*8 << endl;
 cout << "Tamano de long doble en bits:" << sizeof(long double)*8 << endl;

  return 0;
}