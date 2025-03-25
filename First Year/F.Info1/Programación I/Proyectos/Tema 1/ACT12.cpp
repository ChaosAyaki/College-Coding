/*
Realizado por: Pablo Dominguez Corbacho
Fecha:25/09/2024

Descripcion: Es un  programas que pide un numero real correspondiente al dinero
de los proyectos y muestra por pantalla que dinero ira destinado a cada ciudad, y a cada una de sus sedes.

*/

#include <iostream>
using namespace std;

int main () // El Resultado aparece con notacion cientifica
{
	float DineroTotal, DnCiudadS, DnCiudadC, DnCiudadM, CapS, CapC, CapM, DH, PR, L, B;

cout<< "Escribe el dinero total de el proyecto:"<< endl;
cin>> DineroTotal;

DnCiudadS= (50.0/100.0)*DineroTotal;
DnCiudadC= (30.0/100.0)*DineroTotal;
DnCiudadM= (20.0/100.0)*DineroTotal;

CapS= (35.0/100.0)*DnCiudadS;
DH= (65.0/100.0)*DnCiudadS;

CapC= (50.0/100.0)*DnCiudadC;
PR= (20.0/100.0)*DnCiudadC;
L= (30.0/100.0)*DnCiudadC;

CapM= (80.0/100.0)*DnCiudadM;
B= (20.0/100.0)*DnCiudadM;

cout<< "Dinero destinado a Sevilla:"<<" " << DnCiudadS<<" " << "Millones"<< endl;
cout<< "Dinero destinado a la capital:"<<" " << CapS<<" " << "Millones"<< endl;
cout<< "Dinero destinado a Dos Hermanas:"<< " "<< DH<<" " << "Millones"<< endl;
cout<< " "<< endl;

cout<< "Dinero destinado a Cordoba:"<< " "<<DnCiudadC <<" " << "Millones" << endl;
cout<< "Dinero destinado a la capital:"<<" " << CapC<<" " << "Millones"<< endl;
cout<< "Dinero destinado a Palma del Rio:"<<" " << PR<<" " << "Millones"<< endl;
cout<< "Dinero destinado a Lucena:"<<" " << L<<" " << "Millones"<< endl;
cout<< " "<< endl;

cout<< "Dinero destinado a Malaga:"<< " "<<DnCiudadM <<" " << "Millones" << endl;
cout<< "Dinero destinado a la capital:"<<" " << CapM<<" " << "Millones"<< endl;
cout<< "Dinero destinado a Benalmadena:"<<" " << B<<" " << "Millones"<< endl;

 return 0;
}