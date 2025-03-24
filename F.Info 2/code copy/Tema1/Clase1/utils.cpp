#include "utils.h"


int funcionCualquiera()
{
    return 42;
}

double funcionSumaIntFloat(int a, float b)
{
    cout << "La direccion de a es: " << &a << endl;
    cout << "La direccion de b es: " << &b << endl;
    return a + b;
}

int factorial_pv(int num){
    // cout << "Direccion de num: " << &num << endl;
    int resultado = num;
    for (int i = 1; i < num; ++i){
        resultado *= i;
    }
    return resultado;
}

void factorial_pr(int& num){
    // cout << "Direccion de num: " << &num << endl;
    int limite = num;
    for (int i = 1; i < limite; ++i){
        num *= i;
    }
}

void factorial_puntero(int * punt_a_num){
    int limite = *punt_a_num;
    for (int i = 1; i < limite; ++i){
        *punt_a_num *= i;
    }
}


void sumaVectores(double *p1, double *p2, double *p3, int n){
    for(int i = 0; i < n; i++){
        *(p3+i) = *(p1+i) + *(p2+i);
    }
}


void sumaVectoresP(double ** p_arreglo_p, int n){
    // en el primer elemento tenemos v1
    // en el segundo elemento tenemos v2
    // en el tercer elemento tenemos v3
    for(int j = 0; j < n; j++){
        *(*(p_arreglo_p + 2)+j) = *(*(p_arreglo_p + 0)+j) + *(*(p_arreglo_p + 1)+j);
    }
}