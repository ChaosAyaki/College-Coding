#include<iostream>

using namespace std;

//Pass by pointer
void facto(long *p_entrada){
    long limite = *p_entrada;
    for(int i = 1; i<limite; i++){
        *p_entrada *= i;
    }
}

int main(){
    long numero;
    long *p_numero = &numero;
    
    do{
        cout << "Introduzca un numero ";
        cin >> numero;
    }while(numero<=0);
    
    facto(p_numero); //O puedes poner directamente facto(&numero) sin necesidad de crear un puntero que apunte a la direccion de numero
    cout << "resultado es " << numero << endl;

}

//Explicando este caso que es pass by pointer, tenemos que en el main le damos valor a un numero y creamos tambien un puntero dentro del main
//y lo que hacemos es poner el puntero apuntando a la direccion del valor del numero, despues de eso metemos el puntero que apunta a la direccion
//de nuestro valor a la funcion void que coje de entrada el puntero con un asterico delante que eso significa basicamente el valor directo del
//numero que asignamos, despues dentro de la funcion vamos modificando el puntero y al final cambia el valor del numero.

