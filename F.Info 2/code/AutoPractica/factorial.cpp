#include<iostream>

using namespace std;

 unsigned long long  facto(int a){
   
   unsigned long long resultado = 1;
   
   for (int i = 1; i <= a; i++) {
    resultado *= i;
   }
   
   return resultado;

}

int main(){
    
    unsigned long long numero;

    do{
        cout << "Introduce algun numero para aplicar el factorial: ";
        cin >> numero;
    }while(numero < 0);

    cout << "El factorial del numero: " << numero << " es " << facto(numero) << endl;

    return 0;
}