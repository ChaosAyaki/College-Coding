#include "Cabecera.h"
#include <iostream>
#include <cmath>
#include <string>
#define MAX_DIM 1000

using namespace std;

char n;      
bool sal = false;

int main() {
    struct inv inventario[MAX_DIM];
    int num_elem = 0;

    do {
        cout << "Para anadir un nuevo producto al inventario pulse 1" << endl;
        cout << "Para eliminar un producto especificado del inventario pulse 2" << endl;
        cout << "Para buscar un producto por su identificador y mostrar toda su informacion pulse 3" << endl;
        cout << "Para listar todos los productos disponibles en el inventario pulse 4" << endl;
        cout << "Para calcular y mostrar el valor total del inventario, considerando la cantidad y el precio de cada producto pulse 5" << endl;
        cout << "Para filtrar y mostrar todos los productos de una categoria especifica indicada por el usuario pulse 6" << endl;
        cout << "Para determinar y mostrar los datos del producto mas caro y del producto mas barato en el inventario pulse 7" << endl;
        cout << "Para salir del programa pulse 8" << endl;
        cin >> n;

        switch (n) {
            case '1': {
                
				struct inv elem;
                cout << "Introduce ID: ";
                cin >> elem.ID;
                cout << "Introduce Nombre: ";
                cin >> elem.nom;
                cout << "Introduce Categoria: ";
                cin >> elem.categ;
                cout << "Introduce Cantidad: ";
                cin >> elem.cant;
                cout << "Introduce Precio: ";
                cin >> elem.preci;

                num_elem=anadir(inventario, num_elem, elem);
                break;
            }
            case '2': {
                
				string ID;
                cout << "Introduce ID del producto a eliminar: ";
                cin >> ID;
                num_elem=eliminar(inventario, num_elem, ID);
                break;
            }
            case '3': {
               
			   string ID;
                cout << "Introduce ID del producto a buscar: ";
                cin >> ID;
                buscar(inventario, num_elem, ID);
                break;
            }
            case '4': {
                
				listar(inventario, num_elem);
                break;
            }
            case '5': {
                
				cout << "Valor total del inventario: " << valorTotal(inventario, num_elem) << endl;
                break;
            }
            case '6': {
               
			   string categ;
                cout << "Introduce la categoria a filtrar: ";
                cin >> categ;
                filtrarPorCategoria(inventario, num_elem, categ);
                break;
            }
            case '7': {
                mostrarMasCaroYMasBarato(inventario, num_elem);
                break;
            }
            case '8': {
						sal = true;
                break;
            }
            default:
                cout << "Error: Opcion no valida" << endl;
        }
    } while (!sal);

    return 0;
}
