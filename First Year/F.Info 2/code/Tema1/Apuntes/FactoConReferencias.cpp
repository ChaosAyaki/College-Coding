#include<iostream>

using namespace std;

//Pass by reference 
void facto(long& entrada){ //tenemos una funcion void que se llama pero no devuelve ningun valor 
    long limite = entrada;
    for(int i = 1; i < limite; i++){ 
        entrada *= i;
    }
}

int main(){
    long numero;
    do{
        cout << "Introduzca un valor ";
        cin >> numero;
    }while(numero<=0);
    facto(numero);
    cout << "El factorial del numero que introdujiste es " << numero <<  endl;
    return 0;
}

//Explicando el ejercicio basicamente en el main ponemos un numero que entra en la funcion y creamos como tal un espacio de memoria variable
//Despues de eso lo modificamos en la funcion y como tal tambien cambia el valor asignado en el main