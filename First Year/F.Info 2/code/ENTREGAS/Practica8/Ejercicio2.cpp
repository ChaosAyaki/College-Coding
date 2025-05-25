#include<iostream>
#include<queue>
#include<string>
#include<iomanip>

using namespace std;

int main(){
	string d1,d5; //Primer dato y el quinto dato son de tipo cadena de caracteres
	int d2; //Segundo dato de tipo entero
	float d3,d4; //Tercer y cuarto dato son de tipo flotantes 
	float resultado; //Para el resultado del dato 2 dividido entre 10
	
	queue<string> datos; //Una cola que almacena valores de tipo cadena de caracteres
	
	cout << "Introducir una cadena de caracteres: ";
	cin >> quoted(d1);
	
	cout << "Introducir un numero de tipo entero: ";
	cin >> d2;
	resultado = d2/10.0;
	
	cout << "Introducir un numero decimal: ";
	cin >> d3;
	
	cout << "Introducir un numero decimal: ";
	cin >> d4;
	
	cout << "Introducir una palabra clave: ";
	cin >> d5;
	
	//Almacenando los valores en la cola
	datos.push(d1);
	datos.push(to_string(d2));
	datos.push(to_string(d3));
	datos.push(to_string(d4));
	datos.push(d5);
	
	cout << left << setw(20) << d1 << endl;
	cout << right << setw(10) << fixed << setprecision(1) << resultado << endl;
	cout << left << fixed << setprecision(2) << d3 << endl;
	cout << left << fixed << setprecision(5) << d4 << endl;
	cout << quoted(d5) << endl;

	return 0;
}