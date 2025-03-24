#include<iostream>

using namespace std;

int main(){
    int numero;
    int *punt1, **punt2;
    
    numero = 10;
    punt1 = &numero;
    punt2 = &punt1;

    cout << numero << endl;
    cout << *punt1 << endl;
    cout << **punt2 << endl; //En estos tres casos lo que representa es el valor de numero

    cout << punt1 << endl;
    cout << *punt2 << endl;//En estos dos casos lo que representa es la direccion de numero y *punt2 representa la direccion de punt1 que 
                        //que es la direccion de numero
    
    cout << punt2; //Aqui lo que representa es la direccion de punt2 su propia direccion

    return 0;
}