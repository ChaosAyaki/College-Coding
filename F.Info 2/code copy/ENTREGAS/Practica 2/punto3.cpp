#include "coche.h"
#include "hora.h"
#include<iostream>
#include<string>

using namespace std;

int main(){
	
	Coche coche1;
	Hora hora1;

	coche1.setColor("Negro"); //El color del coche 
	coche1.setMotor("v8"); //Motor que lleva el coche 
	coche1.setVelocidadMaxima(50.0); //Aqui la velocidad maxima del coche va a ser 50kmh

	//Empezamos la ejecucion aqui
	coche1.arrancar();
	hora1.reiniciar(12,59,55); //Reiniciamos la hora 
	
	for(int i = 0; i < 15; i++){
		hora1.sumarSegundos(1); //Aqui vamos sumando 1s por cada vez que se haga el bucle 
		//Hacemos que el coche aumente de velocidad en 4m/s cada 5s
		for(int i = 0; i < 5;i++){
			coche1.acelerar(4.0);
		}
		//Hacemos que el coche frene 2m/s cada 10s
		for(int i = 0; i < 10;i++){
			coche1.frenar(2.0);
		}
		cout << "Velocidad del coche: " << coche1.obtenerVelocidad() << endl;
		cout << "La hora es: " << hora1.mostrarHora() << endl;
	}
	coche1.apagar(); //Apagamos el coche
	return 0;
}