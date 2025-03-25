#include<iostream>
#include<string>

using namespace std;   

int main(){
    int a = 123;
    string resultado;
    cout << "Aqui viendo si funciona el cout y compilacion. " << endl;
    resultado = to_string(a) + " " + "Hola que hace";
    cout << resultado;
    return 0;
}