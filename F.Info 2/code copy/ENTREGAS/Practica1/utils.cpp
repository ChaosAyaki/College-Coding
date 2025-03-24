#include "utils.h"

void ejercicio1(float &ref){
	ref = (ref*3.14159)/180;
}

void ejercicio3(int* pe1, double* pd1, long valor){
	*pd1 = (*pe1*valor)/ *pd1;
}

int multiplicarVectores(int* v1, int* v2, int n){
	int resultado = 0;
	for(int i = 0; i < n; i++){
		resultado += v1[i]*v2[i];
	}
	return resultado;
}

void sumaDosMatrices(float *p1, float *p2, float *resultado, int fila, int columna){
	for(int i = 0; i < fila; i++){
		for(int j = 0; j < columna; j++){
			*(resultado + i * columna + j) = *(p1 + i * columna + j) + *(p2 + i * columna + j);
		}
	}
}
