#include<iostream>

using namespace std;

typedef struct{
    string nombre;
    int edad;
}Persona;

int main(){
    Persona persona1, *p1;
    p1 = &persona1;
    p1->nombre = "Hugo"; //Estas dos cosas son lo mismo 
    (*p1).nombre = "ChaosAyaki";
    cout << persona1.nombre << endl;

    cout << endl;

    int a = 3, *pa;
    pa = &a; //Tambien se puede poner asi int *pa = &a;
    cout << a << endl;
    cout << pa << endl;
    *pa = 5;
    cout << *pa << endl;
    cout << a << endl; //Si ponemos cout << *pa saldria lo mismo
    cout << pa;
    
    return 0;
}