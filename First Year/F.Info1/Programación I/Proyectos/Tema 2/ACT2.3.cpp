/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 07/10/2024

Descripcion: El programa pedira al usuario las notas del examen practico, los cuestionarios y las actividades de clase.
Y hara las medias de las notas.

*/

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    float exam, cuest, act, porcexam, porcuest, porcact, media;
	
	cout<< "Introduce la nota del examen practico:"<< endl;
	cin>> exam;
	
	cout<< "Introduce la nota del cuestionario:"<< endl;
	cin>> cuest;
	
	cout<< "Introduce la nota de las actividades de clase:"<< endl;
	cin>> act;
	
		if (exam<5){
		
		cout<< "El examen no hace media ya que es menor que 5"<< endl;
	    }
		if (cuest<5){
				
		cout<< "El cuestionario no hace media ya que es menor que 5"<< endl;
		}
					
		if (act<5){
					
		cout<< "Las actividades no hacen media ya que es menor que 5"<< endl;
		 }
	
	porcexam= exam * 0.40;
	porcuest= cuest * 0.10;
	porcact= act * 0.50;
	
	media= porcexam + porcuest + porcact;
	
	cout<< "Tu media es de:"<< media<< endl;
	
	if (media>=9){
	
	cout<< "Es decir de Sobresaliente"<< endl;
    }

    else if (media>=7){
			
			cout<< "Es decir de Notable"<< endl;
		}
		
	else if (media>=5){
				
				cout<< "Es decir de Aprobado"<< endl;
			}
			
	else if(media<5){
					
		cout<< "Es decir de Suspenso"<< endl;
		}
				
	
	 return 0;
}