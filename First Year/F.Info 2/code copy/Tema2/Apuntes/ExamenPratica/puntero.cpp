#include<iostream>

using namespace std;

void sumarDiagonal(float* matriz, float* resultado, int m, int n);

int main(){
    float matriz = {{1,5,6,5}{2,6.4,6.2,9.7}{0,8.2,7,9.4}};
    float resultado;
	
	sumarDiagonal(&matriz[0][0], &resultado, 3, 4);
	
	cout << resultado;
	
	return 0;
}

void sumarDiagonal(float* matriz, float* resultado, int m, int n){
	
	/*for(int i = 0; i < m*n; i+=(n+1)){
		//cout << i; //Este cout de aqui sirve para evaluar error de codigo. Para comprobar si el valor de i que esta dando esta bien o no. 
		*resultado += *(matriz+i);
	}*/
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(i==j){
				*resultado += *(matriz+i+j*n);
			}
		}
	}
}