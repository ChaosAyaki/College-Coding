/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 24/09/2024

Descripcion: Es un programa que dada una hora inicial y una hora final (indicada en horas, minutos y segundos),
calcula la diferencia entre ambas y muestra el resultado por pantalla.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {

	int Hinic, Minic, Seginic, Hfin, Mfin, Segfin;
	int TotalInSeg, TotalFinSeg, Difseg;
	int Result, ResulH, ResulM, ResulSeg;

	cout<< "Escriba las horas iniciales:"<< endl;
	cin>> Hinic;

	cout<<"Escriba los minutos iniciales:"<< endl;
	cin>> Minic;

	cout<<"Escriba los segundos iniciales:"<< endl;
	cin>> Seginic;

	cout<<"Escriba las horas finales:"<< endl;
	cin>> Hfin;

	cout<< "Escriba los minutos finales:"<< endl;
	cin>> Mfin;

	cout<<"Escriba los segundos finales:"<< endl;
	cin>> Segfin;

	TotalInSeg= Hinic * 3600 + Minic * 60 + Seginic;
	TotalFinSeg= Hfin * 3600 + Mfin * 60 + Segfin;
	
	Difseg= TotalFinSeg - TotalInSeg;
	
	Result= abs(Difseg);
	
	ResulH= Result / 3600;
	int Sobr= Result % 3600;
    
	ResulM = Sobr / 60;
    ResulSeg = Sobr % 60;
	

	cout<< "El resultado es:"<< ResulH<<" " << "Horas"<<" "<< ResulM<<" " << "Minutos"<<" "<< ResulSeg<<" " << "Segundos"<< endl; 

	return 0;
}