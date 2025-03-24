/*
Realizado por: Pablo Dominguez Corbacho
Fecha:11/10/2024

Descripcion: Se Repite el ejercicio anterior haciendo uso de if-else anidados.

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
	
	if (mes== 1){
		
		dias= 31;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 2){
		cout<< "Es un ano bisiesto? (1 para si, 0 para no): ";
            cin>> Bi;

            if (Bi) {
                dias = 29;
						cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;

            } else {
                dias = 28;
						cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;

            }
	}
	else if (mes== 3){
		
		dias= 31;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 4){
		
		dias= 30;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 5){
		
		dias= 31;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 6){
		
		dias= 30;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 7){
		
		dias= 31;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 8){
		
		dias= 31;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 9){
		
		dias= 30;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 10){
		
		dias= 31;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 11){
		
		dias= 30;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else if (mes== 12){
		
		dias= 31;
		cout<< "El mes " << mes << " del ano " << ano << " tiene " << dias << " dias." << endl;
	}
	else {
		
		cout<< "Mes invalido"<< endl;
	}
	
	 return 0;
}