#include<iostream>

using namespace std;

void ejercicio2(int* pe1, double* pd1, long l1){
    *pd1 = *(pe1)*l1/ *(pd1);
}

int main(){
    int a = 10;
    int *pa = &a;
    double b = 8.1;
    double *pb = &b;
    long c = 6;
    ejercicio2(&a, &b, c); //Puedes meter eso o ejercicio(pa,pb,c); es lo mismo al final 
    cout << b;  
    return 0;
}