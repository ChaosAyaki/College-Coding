#include<iostream>

using namespace std;

int main(){
    int valor = 100; //Le damos un valor a la variable "valor"
    int *dir_valor; // Asignamos que dir_valor es un puntero (lo declaramos puntero)
    dir_valor = &valor; //Vemos que si ponemos "&valor" el "&" significa "aspersand" eso declara la direccion de la variable valor

    cout << "La direccion de valor es " << dir_valor << " (Este seria la direccion actual definido por dir_valor)" << endl;

    //asignamos nuevo valor 
    int valor2 = 123;
    dir_valor = &valor2;

    cout << "La direccion ahora de dir_valor seria " << dir_valor << " (Como vemos hemos almacenado otra direccion)" << endl;
    
    cout << endl;

    //Nuevo ejemplo 

    char a = '!', b, c = 'a'; //tener en cuenta que "b" no tiene asignado ningun valor 
    char *p_a, *p_b; //esto son punteros

    p_a = &a; //direccion de a almacenado en p_a
    p_b = p_a; //p_b y p_a tienen la misma direccion almacenado

    b = *p_b; // aqui b no imprime la direccion almacenado en p_b sino almacena el valor que apunta el puntero p_b
    cout << "como tenemos que p_b guarda la direccion de " << a << ", pues si asignamos b a lo que apunta p_b, entonces el valor de b es " << b << " que es igual al de a " << endl;
    cout << "vemos que a es igual a " << a << endl;
    
    *p_a = c; //aqui como el puntero de p_a almacena la direccion de a si lo igualamos al valor de la variable c, tenemos que a = c. Esta se da porque en ese puntero tenemos almacenado la direccion de a pero claro si lo asignamos al valor de la variable c entonces la direccion de a se refiere al valor c y como a esta en la direccion a y esta igualado al valor c entonces a = c.
    cout << "pero aqui despues de cambiar el valor de la direccion de a al de c, tenemos que el valor de a es ahora " << a << endl;
    
    
    return 0;
}