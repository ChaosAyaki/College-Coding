#include<iostream>

using namespace std;

int facto(int entrada){
    int resultado = entrada;
    for(int i = 1; i < entrada; i++){
        resultado *= i;
    }
    return resultado;
}

int main(){
    int numero;
    do{
        cout << "introduzca un valor(el valor tiene que ser positivo o mayor que 0): ";
        cin >> numero;
    }while(numero<=0);

    cout << "El resultado factorial de tu valor " << numero << " es " << facto(numero) << endl;
    return 0;
} 