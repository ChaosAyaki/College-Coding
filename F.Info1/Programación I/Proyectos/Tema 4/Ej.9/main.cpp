#include "cab.h"

int main() {

    int vector[MAX_SIZE];
    int n = 0, opcion, elemento, posicion;

    do {
        cout << "Menú:" << endl;
        cout << "1. Anadir elemento" << endl;
        cout << "2. Eliminar elemento" << endl;
        cout << "3. Mostrar vector" << endl;
        cout << "4. Contar divisores de 5" << endl;
        cout << "5. Salir" << endl;
        cout << "Introduce una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Introduce el elemento a anadir: ";
                cin >> elemento;
                anadirElemento(vector, n, elemento, MAX_SIZE);
                break;
            case 2:
                cout << "Introduce la posicion a eliminar: ";
                cin >> posicion;
                eliminarElemento(vector, n, posicion);
                break;
            case 3:
                mostrarVector(vector, n);
                break;
            case 4:
                cout << "Numero de divisores de 5: " << contarDivisoresDe5(vector, n) << endl;
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }
    } while (opcion != 5);

    return 0;
}
