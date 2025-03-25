/*
Realizado por: Pablo Dominguez Corbacho
Fecha:11/10/2024

Descripcion: Es un programa que determina si un ano es o no bisiesto. 
Recuerda que son bisiestos todos los anos cuya cifra es multiplo de 4 excepto los que siendo multiplos de 100
no lo son de 400. Ası 1900 no fue bisiesto, pero 2000 sı.


*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int ano;
	bool Bi;
	
	cout<< "Introduce un ano:"<< endl;
	cin>> ano;
	cout<<" "<< endl;
	
	if (ano % 400 == 0) {
        Bi= true;
    }
	else if (ano % 100 == 0) {
        Bi= false;
    }
	else if (ano % 4 == 0) {
        Bi= true;
    }
	else {
		Bi= false;
	}
	
	 if (Bi) {
        cout << ano << " es un ano bisiesto" << endl;
    } else {
        cout << ano << " no es un ano bisiesto" << endl;
    }
	
	 return 0;
}