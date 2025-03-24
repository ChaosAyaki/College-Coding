/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 06/11/2024

Descripcion: 
Implemente un programa en C++ que realice las siguientes operaciones en el siguiente orden:

1. Introducir el numero de elementos del vector. 
2. Introducir los elementos del vector.
3. Mostrar los elementos del vector.
4. Calcular la suma de los elementos del vector.
5. Calcular la media de los elementos del vector.
6. Calcular la varianza de los elementos del vector.
7. Determinar el valor maximo de los elementos del vector. 
8. Determinar el valor mınimo de los elementos del vector.

*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;

int main () {
	
    int nel, el;
	char n;
	float suma, med, var;
	int vect [DIM_MAX];
	bool sal = false;
	
	int max,min;
	
	suma=0;
	var= 0;
	
	do{
	
		cout<< "Para Introducir el numero de elementos del vector pulse '1'"<< endl;
		cout<< "Para Introducir los elementos del vector pulse '2'"<< endl;
		cout<< "Para Mostrar los elementos del vector pulse '3'"<< endl;
		cout<< "Para Calcular la suma de los elementos del vector pulse '4'"<< endl;
		cout<< "Para Calcular la media de los elementos del vector pulse '5'"<< endl;
		cout<< "Para Calcular la varianza de los elementos del vector pulse '6'"<< endl;
		cout<< "Para Determinar el valor maximo de los elementos del vector pulse '7'"<< endl;
		cout<< "Para Determinar el valor mınimo de los elementos del vector pulse '8'"<< endl;
		cout<< "Para Salir del programa pulse '9'"<< endl;
		cin>> n;
	
		cout<< " "<< endl;
	
		switch (n) {
			case '1' :do { 
							cout<< "Introduce el numero de elementos del vector:"<< endl;
							cin>> nel;
						} while ((nel<1) || (nel >DIM_MAX));
			break;
			case '2' :
		
						for (int i = 0; i < nel; i++) {
							cout << "Introduce el elemento " << i + 1 << " del vector: ";
							cin >> vect[i];
							
							}

			break;
			case '3' : cout << "Los elementos del vector son: [";
			         
						for (int i = 0; i < nel; i++) {
							
							cout << vect[i] << ",";
							}
								cout << "] "<< endl;

			break;
			case '4' : 
					  suma=0;
                      for (int i = 0; i < nel; i++) {
							
							suma += vect[i];
							}
			
					cout<< "La suma de los elementos es:"<< " "<< suma<< endl; 
			break;
			case '5' : 
			        
					suma=0;
                      for (int i = 0; i < nel; i++) {
							
							suma += vect[i];
							}
					med= suma / nel;
				   
				   cout<< "La media de los elementos es:"<< " "<< med<< endl;
			break;
			case '6' : 
					  suma=0;
                      for (int i = 0; i < nel; i++) {
							
							suma += vect[i];
							}
					   med= suma / nel;
					   
					   for (int i = 0; i < nel; i++) {
						
						var += pow(vect[i] - med, 2);
						}
							var /= nel;
							cout << "La varianza de los elementos es: " << var << endl;
			break;
			case '7' :  max = vect[0];
							for (int i = 1; i < nel; i++) {
								if (vect[i] > max) {
									max = vect[i];
									}
								}
			cout << "El valor maximo es: " << max << endl;
			break;
			case '8' :  
						
						min = vect[0];
						for (int i = 1; i < nel; i++) {
							if (vect[i] < min) {
								min = vect[i];
								}
							}
						cout << "El valor minimo es: " << min << endl;
                 break;
			
			case '9' : sal = true;
			break;
		
			default : cout<< "Error a introducido un numero incorrecto"<< endl;
			} 
		} while ( sal == false );
	
	 return 0;
}