#include<iostream>
#include<stack>
#include<string>
#include<iomanip>

using namespace std;

int main(){
	int d1; //Primer dato que es de tipo entero
	float d2, d3; //Segundo y tercer datos son de tipo flotante
	string d4; //Cuarto y ultimo dato de tipo cadena de caracteres
	
	cout << "Introducir un numero de 8 digitos: ";
	cin >> d1;
	
	cout << "Introducir un numero con decimales: " ;
	cin >> d2;
	
	cout << "Introducir otro numero con decimales: ";
	cin >> d3;
	
	cout << "Por ultimo, introducir una cadena de caracteres: ";
	cin >> d4;
	
	stack<string> datos; //Pila que almacena datos de tipo cadena de caracteres
	
	//Almacenando los datos en una pila
	datos.push(to_string(d1));
	datos.push(to_string(d2));
	datos.push(to_string(d3));
	datos.push(d4);
	
	cout << endl;
	
	cout << quoted(d4) << endl;
	cout << fixed << setprecision(3) << d3 << endl;
	cout << fixed << setprecision(6) << d2 << endl;
	cout << setw(10) << right << d1 << endl;
	
	return 0;
}