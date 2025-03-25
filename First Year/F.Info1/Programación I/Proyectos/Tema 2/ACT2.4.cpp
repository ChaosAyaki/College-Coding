/*
Realizado por: Pablo Dominguez Corbacho
Fecha:08/10/2024

Descripcion: Es un programa que pide al usuario el valor de un radio y una opcion para elegir mediante un menu switch-case el calculo de: 
longitud de una circunferencia, area de una circunferencia, area de una esfera y volumen de una esfera. 

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    float radio, Pi, L, Arc, Arf, Vol;
	char Calc;
	Pi=3,14;
	
	cout<< "Cual es el radio en metros:"<< endl;
	cin>> radio;
	
	cout<<" ";
	cout<< "Si quiere calcular la longitud de una circunferencia pulse A"<< endl;
	cout<<" ";
	cout<< "Si quiere calcular el area de una circunferencia pulse B"<< endl;
	cout<<" ";
	cout<< "Si quiere calcular el area de una esfera pulse C"<< endl;
	cout<<" ";
	cout<< "Si quiere calcular el volumen de una esfera pulse D"<< endl;
	cout<<" ";
	
	cout<< "Que quieres calcular:"<< endl;
	cin>> Calc;
	
	L= (2*Pi)*radio;
	Arc= Pi*(radio*radio);
	Arf= (4*Pi)*(radio*radio);
	Vol= ((4/3)*Pi)*(radio*radio*radio);
	
	switch (Calc) {
	case 'A': cout<< "La longitud de la circunferencia es:"<< " "<< L<<"m" <<endl;
	break;
	case 'B' : cout<< "El area de la circunferencia es:"<< " "<< Arc<<"m^2" <<endl;
	break;
	case 'C' : cout<< "El area de una esfera es:"<< " "<< Arf<<"m^2" <<endl;
	break;
	case 'D' : cout<< "El volumen de la esfera es:"<< " "<< Vol<<"m^3" <<endl;
	break;
	default: cout<< "Error no es posible esta opcion"<< endl;
	}
	
	 return 0;
}