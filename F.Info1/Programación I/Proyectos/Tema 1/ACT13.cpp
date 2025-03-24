/*
Realizado por: Pablo Dominguez Corbacho
Fecha:29/09/2024

Descripcion: Es un programa que Te dice tu nombre completo, te da la primera letra de tu nombre,
te dice si tu nombre tiene la letra a y te dice la cantidad de caracteres que tiene tu nombre.

*/

#include <iostream>
#include <string>
using namespace std;

int main () {
	
    string nombre, apellido;
	
	cout << "Introduce tu nombre: ";
    cin >> nombre;
	
	cout << "Introduce tu apellido: ";
    cin >> apellido;
	
	string nombre_completo = nombre + " " + apellido;
	
	cout << "Tu nombre completo es: " << nombre_completo << endl;
	
	 cout << "La primera letra de tu nombre es: " << nombre_completo[0] << endl;
	 
	  if (nombre_completo.find("a") != string::npos) {
        cout << "Tu nombre contiene la letra 'a'." << endl;
    } else {
        cout << "Tu nombre no contiene la letra 'a'." << endl;
    }
	
	cout << "Tu nombre completo tiene " << nombre_completo.size() << " caracteres." << endl;
	
	 return 0;
}