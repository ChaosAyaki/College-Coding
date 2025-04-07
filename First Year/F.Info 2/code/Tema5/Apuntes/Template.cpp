#include<iostream>

using namespace std;

/*
Para crear un template, que basicamente para lo que sirve es imaginate que queremos crear ficheros para todas las dimensiones
pero una funcion amiga de otra para determinarlo y en vez de repetirla tenemos que hacer esto 
*/

//template <typename T> T& funcion("Parametros"){
//    //Metodos de la funcion
//}

//un ejemplo con complejos

template <typename T> T& encontrarMinimo(T* a, int n){
    int i_min = 0;
    for(int i = 0; i < n-1  ; i++){
        if(*(a+i) < *(a+i_min)){
            i_min = i;
        }
    }
    return *(a+i_min);
}

template<class T> T seleccionarMenor(T a, T b){ 
    return (a < b) ? a : b;
}
/*
La diferencia entre class y typename no es ninguna ambas funcionan igual solo que class a lo mejor sirve para cosas menos complejas.
*/

int main(){
    int a[] = {1,2,3,4,5};
    cout << "El minimo es " << encontrarMinimo(a,5) << endl;
    float b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    cout << "El minino es " << encontrarMinimo(b,5) << endl;
   
    /*
    Como vemos la funcion lo que hace es recorrer el arreglo para ver cual es el valor minimo, pero porque funciona con el int y el
    float de la misma manera?:
    esto funciona porque la funcion de template, cuando defines un Template <typename T>>>> T& y despues lo que sea, aqui estas diciendo que
    no se sabe el tipo de varible que entra que si es integer, float, bool, etc va a entrar y se comportara de la misma manera. 
    */

    //Tenemos ahora un nuevo operador llamada "?" que se llama operador ternario o forma parte de ella.
    //Ejemplo:
    int numero;
    cout << "Introduce numero para ver si es par o no: ";
    cin >> numero;
    cout << ((numero % 2 == 0) ? "Par" : "Impar");

    int edad;
    cout << "Introducir edad para ver si es mayor o menor: ";
    cin >> edad;
    string mensaje = (edad>=18) ? "Mayor de edad" : "Menor de edad";
    cout << mensaje << endl;

    /*
    Como funciona realmente puesto en ejemplo; tenemos una condicion, "condicion ? valor_si_true : valor_si_false;"
    Basicamente, tenemos una condicion ponemos el operador ternario que y si ve que es verdadero, da directamente la primera y sino,
    da el valor de la segunda esto funciona tambien para muchas cosas como por ejemplo:
    */

    //con templates y funciones y returns:

    int n1 = 1; //Por ahora solo puedes meter dos del mismo tipo (de lo que hemos estudiado hasta ahora)
    int n2 = 7;
    cout <<"El menor es " << seleccionarMenor(n1,n2) << endl; //La plantilla esta definida en las lineas 26-28

    return 0;
}