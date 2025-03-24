/*
Realizado por: Pablo Dominguez Corbacho
Fecha: 

Descripcion: 

*/

#include <iostream>
#include <cmath>
using namespace std;

int pr2 (int a1, int a2) {
	
	int b;
	b= a1*a2;
	
	 return b;
}

// Es igual a:

#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
    int a,b,r;
	
	cout<< "Introduce a y b"<< endl;
	cin>>a;
	cin>>b;
	
	r= pr2 (a,b);
	
	cout<< "El producto de a y b es:"<< r<< endl;
	
	 return 0;
}