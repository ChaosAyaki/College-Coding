#include<iostream>

//Voy a definir los templates antes de la funcion main

template<typename T> T mediaAritmeticaElementos(T a[], int n){
	T resultado = 0;
	for(int i = 0; i < n; i++){
		resultado += a[i];
	}
	resultado = resultado/ n;
	return resultado;
	
}

using namespace std;

int main(){
	
	int a[5] = {12,234,123,67,58};
	float b[3] = {32.5,78.09,89.43};
	double c[2] = {459845.55584,981283891.123123123};
	
	cout << "La media es: " << mediaAritmeticaElementos(a, 5) << endl;
	cout << "La media es: " << mediaAritmeticaElementos(b, 3) << endl;
	cout << "La media es: " << mediaAritmeticaElementos(c, 2) << endl;
	
	return 0;
}