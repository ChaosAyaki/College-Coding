/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 17/10/2024

Descripcion: Disena e implementa una aplicacion para jugar a la ruleta. El programa constara del
siguiente menu principal que se estara repitiendo hasta que el usuario decida salir.
1. Introducir fichas: El usuario mete fichas en su cuenta para poder jugar.
2. Jugar: El usuario elegira a que numero juega y cuanto apuesta.
Rojo (par): si sale un numero par, el usuario gana el doble de lo apostado.
Negro (impar): si sale un numero impar, el usuario gana el doble de lo apostado.
Numero concreto: Si sale el numero, gana 32 veces lo apostado.
3. Ver saldo: el usuario podra ver el numero de fichas que posee.
4. Salir: Se termina de jugar y el programa informara del saldo del usuario.

Hay que tener en cuenta los siguientes conceptos:
Generar numeros aleatorios entre 0 y 32.
No se podra jugar a no ser que se tenga fichas en la cuenta.
No se podra apostar un mayor numero de fichas del que se posee.
En caso de no acertar, se pierde lo apostado.
Utilizar una estructura do-while para que la opcion del menu este en el rango 1, 2, 3 o 4.

*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int main () {
	
	int fich, num, apu, resul, gar, benef, resulr;
	char n;
	bool sal;
	
	srand (time(0));
	
	sal= false;
	
	do {
		
		cout<< "Para introducir fichas pulse '1'"<< endl;
		cout<< "Para jugar '2'"<< endl;
		cout<< "Para ver el saldo pulse '3'"<< endl;
		cout<< "Para salir '4'"<< endl;
		cin>> n;
		
		switch (n){
		case '1' : cout<< "Introduce una cantidad de fichas:"<< endl;
		         cin>> fich;
		break;
		case '2' :cout<< "Cuantas fichas quieres apostar:"<< endl;
				 cin>> apu;
				 
				 gar= fich- apu;
				 
				 if ( fich <= 0) {
					 
					 cout<< "No tienes fichas suficientes"<< endl;
					 
					 break;
				 }
				 
				 cout<< "A que numero quieres apostar de 0 a 32:"<< endl;
				 cin>> num;
				 
				 resulr= rand()%33;
				 
				 cout<< "En la ruleta a salido el numero:"<< " "<<resulr << endl;
				 
				 if (resulr == num){
					 
					 resul= apu * 32;
					 
					 benef= gar + resul;
					 
					 fich= benef;
					 
					 cout<< "Has ganado, tienes:"<< " "<< fich<< " "<< "fichas"<< endl;
				 }
				 
				 else if ((resulr % 2 == 0) && ( num % 2 == 0)) {
					 
					resul= apu * 2; 
					
					benef= gar + resul;
					
					fich= benef;
					
					cout<< "Has ganado, tienes:"<< " "<< fich<< " "<< "fichas"<< endl;
				 }
				 
				 else if ((resulr % 2 != 0) && ( num % 2 != 0)) {
					 
					resul= apu * 2;
					
					benef= gar + resul;
					
					fich= benef;
					
					cout<< "Has ganado, tienes:"<< " "<< fich<< " "<< "fichas"<< endl;
				 }
				 
				 else {
					 
				    fich= gar;
					
					cout<< "Has perdido, te quedan:"<< " "<<fich << " "<< "fichas"<< endl;	
				 
				 }
				 
				 
		break;
		case '3' : cout<< "Tu saldo es de:"<< " "<< fich<< " "<< "fichas"<< endl;
		break;
		case '4' : sal= true;
		break;
		
		default : cout<< "Error a introducido un numero incorrecto"<< endl;
	  }
	  
	  for (int i=0; i<5 ; i++) {
	    cout << endl;
	  }
	}
	while ( sal == false );
	
	 return 0;
}