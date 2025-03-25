#include<iostream>
#include<cmath>

using namespace std;

int elevado(int a, int b){
    int resultado = 1;
    for(int i = 0; i < b; i++){
        resultado *= a;
    }
    return resultado;
} 

int main(){
    
    int numero, exponente, resultado;

    cout << "Introduzca un numero a elevar  : ";
    cin >> numero;

    cout << "Introduzca a cuanto se quiere elevar " << numero << " : ";
    cin >> exponente;

    resultado = elevado(numero,exponente);

    cout << "El resultado es : " << resultado;

    return 0;
}