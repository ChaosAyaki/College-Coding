#include<iostream>

using namespace std;

int main(){
    
    int numero = 3;
    int &referenciaNumero = numero; //Aqui ponemo directamente la direccion de numero a referenciaNumero
    cout << "Aqui numero es igual a " << numero << endl;
    referenciaNumero = 9; //Aqui como hemos cambiado el valor de referenciaNumero, cambiamos tambien el valor de numero 
    cout << "Ahora el valor de numero es " << numero << endl;

    //Basicamente la referencia cuando lo definimos como una variable, lo que hacemos es como tal un espacio de valor que es variable(puede o no cambiar)
    //OJO no se puede hacer definir una referencia sin igualarla a ningun valor vamos que no se puede "int &ref;"

    
    return 0;
}