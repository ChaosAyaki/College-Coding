/*
Realizado por: Pablo Dominguez Corbacho
Fecha:11/10/2024

Descripcion: Es un programa que usa la sentencia switch-case para calcular cuantos dıas tiene
un mes dado (numericamente) de un determinado ano. En caso de que el mes introducido 
sea el mes de febrero, debera preguntar al usuario si el ano es bisiesto o no.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	int ano, mes, dias;
	bool Bi;
	
    cout<< "Introduzca un ano:"<< endl;
	cin>> ano;
	
	cout<<" ";
	cout<< "Introduzca el numero del mes del 1 al 12"<< endl;
	
	cout<< "Que mes quieres calcular:"<< endl;
	cin>> mes;
	
	switch (mes) {
	    case 1:
        case 3:
        case 5:
        case 7:
        case 8: 
        case 10: 
        case 12: 
            dias = 31;
          break;
        case 4:
        case 6: 
        case 9: 
        case 11: 
            dias = 30;
          break;
        case 2:
           cout << "Es un ano bisiesto? (1 para si, 0 para no): ";
            cin >> Bi;

            if (Bi) {
                dias = 29;
            } else {
                dias = 28;
            }
          break;
	default: cout<< "Mes invalido."<< endl;
	}
	
	cout << "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	
	 return 0;
}