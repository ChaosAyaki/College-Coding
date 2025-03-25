#include<iostream>

using namespace std;

int main(){
    
    float pi = 3.14159, dospi;
    float *punt1 , *punt2;

    punt1 = &pi;
    punt2 = &dospi;

    *punt2 = 2*(*punt1); //Como el punt1 apunta a la direccion de pi, si ponemos el asterisco y lo multiplicamos por 2 es como que estamos multiplicando pi como tal 
    //Y esto convierte que dospi es el doble de pi, que es 3.15159*2 que son 6.3...

    cout << "el valor de pi es " << *punt1 << " el valor de dos pi es " << *punt2 << endl;
    //Aqui lo que estamos diciendo practicamente es pi y dospi ya que si ponemos el asterico delante del puntero estamos diciendo el valor al direccion que apunta 
    
    return 0;
}