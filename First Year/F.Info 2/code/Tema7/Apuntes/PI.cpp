#include<iostream>
#include<iomanip> //Nueva libreria del tema
#include<cmath>

using namespace std;

int main(){
    float a;
    a = M_PI; //Porque me daba pereza poner "M_PI" todo el rato 
    cout << fixed; //Esto permite que el siguiente numero que salga pueda ser un decimal 
    cout << setprecision(5) << M_PI << endl; //Lo que hace precision es limitar el numero de decimales 
    cout << fixed << setprecision(22) << a << endl; //Se puede poner asi tambien
    return 0;
}