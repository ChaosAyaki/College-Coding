/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 12/11/2024

Descripcion: Realice un programa que maneje un vector de enteros de tamano N a traves de un menu con cinco opciones:

Anadir un elemento al vector (comprobando que el vector no este lleno).
Eliminar un elemento del vector (comprobando que no este vacıo). Realiza los
desplazamientos de elementos necesarios para que no queden huecos en el vector.
Mostrar el contenido del vector.
Contar el numero de divisores de 5.
Terminar

*/

#include <iostream>
#include <cmath>
#define DIM_MAX 100
using namespace std;

int main () {
	
    int vect [DIM_MAX];
	bool sal = false;
	int elem, tamano = 0, ind;
	char n;
	
	 do {
        cout << "Menu de opciones:"<< endl;
		cout<< " "<< endl;
        cout << "1. Anadir un elemento al vector"<< endl;
        cout << "2. Eliminar un elemento del vector"<< endl;
        cout << "3. Mostrar el contenido del vector"<< endl;
        cout << "4. Contar el numero de elementos divisibles por 5"<< endl;
        cout << "5. Terminar";
		cout<< " "<< endl;
        cout << "Seleccione una opcion: "<< endl;
        cin >> n;

        switch (n) {
            case '1': {
                if (tamano < DIM_MAX) {

                    cout << "Ingrese el elemento a anadir: ";
                    cin >> elem;
                   
				   vect[tamano] = elem;
                    tamano++;
                } else {
                    cout << "El vector esta lleno, no se pueden anadir mas elementos.";
                }
                break;
            }
            case '2': { 
               
			   if (tamano > 0) {

                    cout << "Ingrese el indice del elemento a eliminar (0 a " << tamano - 1 << "): ";
                    cin >> ind;
                   
				   if (ind >= 0 && ind < tamano) {
                        for (int i = ind; i < tamano - 1; i++) {
                            vect[i] = vect[i + 1];
                        }
                        tamano--;
                        cout << "Elemento eliminado.";
                    } else {
                        cout << "Indice fuera de rango.";
                    }
                } else {
                    cout << "El vector esta vacio, no se pueden eliminar elementos.";
                }
                break;
            }
            case '3': { 
                if (tamano > 0) {
                    cout << "Contenido del vector: ";
                    for (int i = 0; i < tamano; i++) {
                        cout << vect[i] << " ";
                    }
                    cout << endl;
                } else {
                    cout << "El vector esta vacio.";
                }
                break;
            }
            case '4': { 
                int cont = 0;
                
				for (int i = 0; i < tamano; i++) {
                    
					if (vect[i] % 5 == 0) {
                        cont++;
                    }
                }
                cout << "Hay " << cont << " elementos divisibles por 5 en el vector.";
                break;
            }
            case '5': sal = true;
                break;
            
			default:
                cout << "Error: ha introducido una opcion incorrecta."<< endl;
        }
   
   } while (!sal);
	
	 return 0;
}