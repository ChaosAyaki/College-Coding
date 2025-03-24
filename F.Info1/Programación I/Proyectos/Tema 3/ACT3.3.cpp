/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 08/11/2024

Descripcion: Un polinomio de grado N se puede representar en programacion como un conjunto de 
N elementos reales, donde cada elemento serıa el coeficiente asociado a un termino del 
polinomio. Implemente un programa que realice de manera secuencial las siguientes operaciones:

1. Leer un polinomio de grado N introducido por el usuario.
2. Mostrar el polinomio por pantalla de manera adecuada.
3. Evaluar el polinomio en un punto X introducido por el usuario.

*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;

int main () {
	
    int vect [DIM_MAX];
	bool sal = false;
	int grado;
	char n;
	double x, resul= 0.0;
	
	do{
		
		cout << "Menu de opciones:"<< endl;
		cout<< " "<< endl;
        cout << "1. Leer polinomio"<< endl;
        cout << "2. Mostrar polinomio"<< endl;
        cout << "3. Evaluar polinomio en un punto X"<< endl;
        cout << "4. Salir"<< endl;
		cout<< " "<< endl;
        cout << "Seleccione una opcion: "<< endl;
        cin >> n;
		
		switch (n){
		case '1' : cout << "Ingrese el grado del polinomio: ";
					cin >> grado;
                
				for (int i = 0; i <= grado; i++) {
                    cout << "Coeficiente de x^" << i << ": ";
				   cin >> vect[i];
				   
				}
        break;
        case '2' :  cout << "Polinomio: ";
               
			   for (int i = grado; i >= 0; i--) {
                    cout << vect[i] << "x^" << i;
                    
					if (i > 0) cout << " + ";
					}
					cout << endl;
        break;
		case '3' :
                cout << "Ingrese el valor de X: ";
                cin >> x;
               
			   for (int i = 0; i <= grado; i++) {
                    resul += vect[i] * pow(x, i);
                }
                cout << "El polinomio evaluado en " << x << " es: " << resul << endl;
		break;
		case '4' :  sal = true;
		break;
		
		default : cout<< "Error a introducido un numero incorrecto"<< endl;
			
		}
		
		
		}while (sal == false);
	
	 return 0;
}