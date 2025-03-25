#include<iostream>

using namespace std;

int main(){
    int a1[5] = {1,2,3,4,5};
    int a2[3] = {45,12,654};
    int a3[2] = {31, 56};
    int* a[3] = {&a1[0], &a2[0], &a3[0]}; 
    //Creado un arreglo que funciona como un puntero que almacena los valores de la posicion 1 de los arreglos 1 2 y 3
    int** p_a_a = &a[0];
    //Ahora he creado un puntero que apunta al primer elemento del arreglo que almacena los primeros elementos de los otros arreglos
    //si por ejemplo queremos sacar el valor 3 que esta en el arreglo 1 entonces hacemos:
    cout << *(*(p_a_a)+2);
    //y ya otros ejemplos pues 
    cout << endl;
    cout << *(*(p_a_a+1)+2); //Saldria por pantalla 654 si no me he equivocado
}