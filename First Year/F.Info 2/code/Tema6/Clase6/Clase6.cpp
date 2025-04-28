#include <iostream>
#include <array>
#include <queue>
#include <list>
#include <stack>
#include <random>

#include "utils.h"
#include "Vector2D.h"
#include "Estudiante.h"
using namespace std;

template<class T> void ordenar(T begin, T end){
    T it, menor_posible;
    int size = begin - end;
    for(int i = 0; i < size; i++){
        menor_posible = begin + i;
        it = begin + i;
        for (int j = i; j < size; j++){
            if (*it < *menor_posible){
                menor_posible = it;
            }
            advance(it, 1);
    }
    swap(*menor_posible, *(begin + i));
    }
} 


int main()
{
    int codigo_ejemplo;
    cout << "Ingrese el numero de ejemplo que desea ejecutar: ";
    cin >> codigo_ejemplo;

    switch (codigo_ejemplo)
    {
    case 1:
    { // Ejemplo 1

        cout << "Crear un arreglo de 5 elementos: " << endl;
        array<float, 5> numeros;
        numeros.fill(0.0);

        for (int i = 0; i < numeros.size(); i++)
        {
            cout << numeros[i] << endl;
        }

        cout << "o bien, utilizando una funcion auxiliar: " << endl;
        array<float, 5> otros_numeros = crear_arreglo();

        for (int i = 0; i < otros_numeros.size(); i++)
        {
            cout << otros_numeros[i] << endl;
        }
		
/*		class A{
			private:
				int b;
			public:
				string toString();
		}
		
		array<A, 3> mi_arreglo;
		for (int i = 0; i < mi_arreglo.size(); i++)
        {
            cout << mi_arreglo[i] << endl;
        }
*/
        break;
    }
    case 2:
    { // Ejemplo 2
        cout << "Crear una cola de 5 elementos: " << endl;
        queue<float> numeros;

        for (int i = 0; i < 5; i++)
        {
            numeros.push(i*1.1f);
        }

        cout << "El número al inicio de la cola es: " << numeros.front() << endl;
        cout << "El número al final de la cola es: " << numeros.back() << endl;
        
        cout << "La cola tiene " << numeros.size() << "elementos" << endl;

        float num;
        while(!numeros.empty()){
            num = numeros.front();
            cout << "El siguiente número en la cola es: " << num << endl;
            numeros.pop();
        }

        break;
    }

    case 3:
    {
        cout << "Crear un stack de 5 elementos: " << endl;
        stack<int> IDs;

        for (int i = 0; i < 5; i++)
        {
            IDs.push(i);
        }

        cout << "El número encima de la pila es: " << IDs.top() << endl;
        
        cout << "La pila tiene " << IDs.size() << "elementos" << endl;

        int num;
        while(!IDs.empty()){
            num = IDs.top();
            cout << "El siguiente número en la pila es: " << num << endl;
            IDs.pop();
        }

       break;
    }
    case 4:
    {
        cout << "Crear una lista de 5 elementos: " << endl;
        list<float> numeros = {1, 2, 3, 4, 5};
        list<float>::iterator it1 = numeros.begin();
        list<float>::iterator it2 = numeros.end();

        cout << "Al inicio de la lista existe: " << *it1 << endl;
        cout << "Al final de la lista existe: " << *it2 << endl;
        
        break;
    }
    case 5:
    {   cout << "Crear una lista de 5 elementos: " << endl;
        list<float> numeros = {5, 1, 3, 4, 2};

        list<float>::iterator it = numeros.begin();
        for (int i = 0; i < numeros.size(); i++){
            cout << *it << endl;
            advance(it, 1);
        }

        break;
    }
    case 6:
    {   cout << "Crear una lista de 5 elementos: " << endl;
        list<float> numeros = {5, 1, 3, 4, 2};
        numeros.sort();

        list<float>::iterator it = numeros.begin();
        for (int i = 0; i < numeros.size(); i++){
            cout << *it << endl;
            advance(it, 1);
        }

        list<Vector2D> vectores;
        vectores.push_back(Vector2D(5, 5));
        vectores.push_back(Vector2D(3, 3));
        vectores.push_back(Vector2D(8, 8));
        vectores.push_back(Vector2D(1, 1));

        vectores.sort();
        
        list<Vector2D>::iterator it2 = vectores.begin();
        for (int i = 0; i < vectores.size(); i++){
            cout << *it2 << endl;
            advance(it2, 1);
        }
        break;
    }
    
    case 7:
    {
        array<int, 5> numeros = {5, 3, 1, 4, 2};
        bool intercambio_hecho;
        do{
            intercambio_hecho = false;
            for (int i = 0; i < numeros.size()-1; i++)
            {
                if (numeros[i] > numeros[i+1]){
                    swap(numeros[i], numeros[i+1]);
                    intercambio_hecho = true;
                }
            }
            
        }while(intercambio_hecho);

        
        for (int i = 0; i < numeros.size(); i++){
            cout << numeros[i] << endl;
        }
        break;
    }

    case 8:{
        
        array<int, 5> numeros = {5, 3, 1, 4, 2};

        for (int i = 0; i < numeros.size(); i++)
        {
            int indice_menor = i;
            for (int j = i; j < numeros.size()-1; j++){
                if (numeros[j] < numeros[indice_menor])
                    {indice_menor = j;}}
            if (i != indice_menor)
                {swap(numeros[i], numeros[indice_menor]);}
            else{
                break;}
        }

        for (int i = 0; i < numeros.size(); i++){
            cout << numeros[i] << endl;
        }

        break;
    }

    case 9:{
        list<int> numeros = {5, 3, 1, 4, 2};
        list<int>::iterator indice_posicion, indice_obj;
        indice_obj = numeros.begin();
        for (int i = 0; i < numeros.size(); i++){
            advance(indice_obj, 1);
            indice_posicion = numeros.begin();
            for (int j = 0; j <= i; j++){
                if(*indice_obj < *indice_posicion ){
                    break;
                }
                advance(indice_posicion, 1);
            }
            int copia = *indice_obj;
            numeros.insert(indice_posicion, copia);
            numeros.remove(*indice_obj);   
        }
        indice_posicion = numeros.begin();
        for (int i = 0; i < numeros.size(); i++){
            cout << *indice_posicion << endl;
            advance(indice_posicion, 1);
        }

        break;
    }

    // case 11:
    // {
    //     vector<int> numeros = {5, 3, 1, 4, 2};
    //     vector<int>::iterator a_insertar, donde;
    //     for (int i = 1; i < numeros.size(); i++)
    //     {
    //         donde = numeros.begin();
    //         a_insertar = numeros.begin() + i;
    //         for (int j = 0; j <= i; j++)
    //         {
    //             if ( *a_insertar < *donde){
    //                 break;
    //             }
    //             advance(donde, 1);
    //         }
    //     int valor = *a_insertar;
    //     numeros.erase(a_insertar);
    //     numeros.insert(donde, valor);
    //     }
        
     
    //     for (int i = 0; i < numeros.size(); i++){
    //         cout << numeros[i] << endl;
    //     }
    //     break;
    // }

    // case 12:
    // {
    //     vector<int> numeros = {5, 3, 1, 4, 2};
    //     ordenar(numeros.begin(), numeros.end());
    //     for (int i = 0; i < numeros.size(); i++){
    //         cout << numeros[i] << endl;
    //     }
    //     break;
    // }

    // case 13:
    // {
    //     vector<Estudiante> estudiantes;
    //     estudiantes.push_back(Estudiante("Juan", 12345678));
    //     estudiantes.push_back(Estudiante("Pedro", 87654321));
    //     estudiantes.push_back(Estudiante("Maria", 45678912));
    //     estudiantes.push_back(Estudiante("Ana", 98765432));
    //     estudiantes.push_back(Estudiante("Lucia", 34567891));

    //     estudiantes.at(0).setPuntajeAcumulado(10);
    //     estudiantes.at(1).setPuntajeAcumulado(5);
    //     estudiantes.at(2).setPuntajeAcumulado(8);
    //     estudiantes.at(3).setPuntajeAcumulado(3);
    //     estudiantes.at(4).setPuntajeAcumulado(6);


    //     cout << "Ordenar por DNI" << endl;
    //     vector<Estudiante>::iterator it, menor_posible;
    //     for(int i = 0; i < estudiantes.size(); i++){
    //         menor_posible = estudiantes.begin() + i;
    //         it = estudiantes.begin() + i;
    //         for (int j = i; j < estudiantes.size(); j++){
    //             if (*it < *menor_posible){
    //                 menor_posible = it;
    //             }
    //             advance(it, 1);
    //         }
    //         swap(*menor_posible, *(estudiantes.begin() + i));
    //     }

    //     for (int i = 0; i < estudiantes.size(); i++){
    //         cout << estudiantes[i].toString() << endl;
    //     }

    //     cout << "----------------------------------" << endl;
    //     cout << "Ordenar por Puntaje" << endl;

    //     * Estudiante::ordenamiento_por_DNI = false;

    //             for(int i = 0; i < estudiantes.size(); i++){
    //         menor_posible = estudiantes.begin() + i;
    //         it = estudiantes.begin() + i;
    //         for (int j = i; j < estudiantes.size(); j++){
    //             if (*it < *menor_posible){
    //                 menor_posible = it;
    //             }
    //             advance(it, 1);
    //         }
    //         swap(*menor_posible, *(estudiantes.begin() + i));
    //     }

    //     for (int i = 0; i < estudiantes.size(); i++){
    //         cout << estudiantes[i].toString() << endl;
    //     }
    //     break;
    // }

    default:
    {
        cout << "Caso default" << endl;
        break;
    }
    }

    return 0;
}