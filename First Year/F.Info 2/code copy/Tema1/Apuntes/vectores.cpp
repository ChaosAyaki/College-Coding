#include<iostream>

using namespace std;

int main(){
    
    int x[] = {1, 2, 3, 4, 5};
    int *punt = &x[0]; //Aqui el puntero apunta a la direccion del elemento 1

    cout << *punt << endl; //Aqui imprime el primer elemento
    cout << *(punt+1) << endl; //Aqui imprime el segundo elemento

    return 0;
}