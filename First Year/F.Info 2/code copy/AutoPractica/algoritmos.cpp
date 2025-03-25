#include<iostream> 
#include<string>

using namespace std;

int main(){
   
    int a = 1;
    string algo, resultado;
    algo = "CARACULO";

    cout << a << endl;

    a = 6;
    
    cout << a << endl;

    cout << "Marsoni la tiene grande. " << endl;
    cout << "Le mide: " << a << endl;

    resultado = to_string(a) + " " + algo;
    cout << resultado; //Para probar la funcion to_string 
    
    return 0;
}