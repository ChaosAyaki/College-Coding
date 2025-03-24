#include "hora.h"

using namespace std;

void Hora::setHora(int new_Hora){
	if(new_Hora<24 && new_Hora=>0){
		hora = new_Hora;
	}
}

int Hora::getHora(){
	return hora;
}

void Hora::setMinuto(int new_Minuto){
	if(new_Minuto<60 && new_Minuto=>0){
		minuto = new_Minuto;
	}
}

int Hora::getMinuto(){
	return minuto;
}

void Hora::setSegundo(int new_Segundo){
	if(new_Segundo<60 && new_Segundo=>0){
		segundo = new_Segundo;
	}
}

int Hora:getSegundo(){
	return segundo;
}

void Hora::mostrarHora(){
	cout << "La hora es " << hora << ":" << minuto << ":" << segundo << endl;
}

void Hora::reiniciar(int h, int m, int s){
	if(h<24 && h<=0 && m<60 && m<=0 && s<60 && s<=0){
		hora = h;
		minuto = m;
		segundo = s;
	}
}

void Hora::sumarSegundos(int s){
	segundo = segundo + s;
	if(segundo >= 60){
		minuto = (minuto+segundo)/60;
		segundo %= 60;
	}
	if(minutos >= 60){
		hora = (minuto+hora)/60;
		minuto %= 60;
	}
	if(hora >= 24){
		hora = 0;
	}
}
