#include<iostream>
#include<vector>
#include<array>

using namespace std;
/*
El algoritmo de tipo burbuja funciona de manera simple. Imaginate un vaso con agua y con gas, la burbuja mas grande es la que sale primero
pues este algoritmo funciona de esta manera. (Como su nombre indica)
*/

/*
El algoritmo de seleccion (Selection sort), de una lista de valores este algoritmo lo que hace es teniendo el primer elemento lo coge y
lo compara, si encuentra uno menor lo que hace es ponerlo detras y asi sucesivamente.
*/

/*
El algoritmo de inserccion (Insertion sort) funciona a base de insertar un elemento entre uno un poco mas pequeño y otro un poco mas grande
dentro de una lista de ordenacion.
*/

int main(){
    
    //Metodo Burbuja
    array<int, 5> n1 = {5,3,1,2,4}; 
    bool intercambio_hecho;
    do{
        intercambio_hecho = false;
        for(int i = 0; i < n1.size()-1; i++){
            if(n1[i] > n1[i+1]){
                swap(n1[i], n1[i+1]);
                intercambio_hecho = true;
            }
        }
    }while(intercambio_hecho);

    //Metodo Seleccion
    array<int, 5> n2 = {4,5,2,1,3};
    for(int i = 0; i < n2.size(); i ++){
        int indice_menor = i;
        for(int j = i; j < n2.size(); j++){
            if(n2[j] < n2[indice_menor]){
                indice_menor = j;
            }
        }
        if(i != indice_menor){
            swap(n2[i], n2[indice_menor])
        } else {
            break;
        }
    }
}