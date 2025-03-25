#include<iostream>
#include "rectangulo.h"

using namespace std;

int main(){
	
	float alto1, alto2;
	double ancho1,ancho2;
	
	//Aqui definimos dos rectangulos a partir de la clase Rectangulo
	Rectangulo rectangulo1;
	Rectangulo rectangulo2;
	
	//Le damos valores a los rectangulos
	rectangulo1.setAlto(5.0);
	rectangulo1.setAncho(10.0);
	cout << "rectangulo1 " << rectangulo1.getAlto() << " alto " << rectangulo1.getAncho() << " ancho " << endl;
	
	rectangulo2.setAlto(3.0);
	rectangulo2.setAncho(7.0);
	cout << "rectangulo2 " << rectangulo2.getAlto() << " alto " << rectangulo2.getAncho() << " ancho " << endl;
	
	//Aplicamos las funciones de la clase
	cout << "Area de rectangulo1 es " << rectangulo1.calcularArea() << endl;
	cout << "Perimetro de rectangulo1 es " << rectangulo1.calcularPerimetro() << endl;
	
	cout << "Area de rectangulo2 es " << rectangulo2.calcularArea() << endl;
	cout << "Perimetro de rectangulo2 es " << rectangulo2.calcularPerimetro() << endl;
	
	return 0;
}