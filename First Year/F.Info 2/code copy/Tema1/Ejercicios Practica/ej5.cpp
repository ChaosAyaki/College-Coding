#include<iostream>

using namespace std;

int multiplicarVectores(int* v1, int* v2, int n){
    int resultado = 0;
    for(int i = 0; i < n; i++){
        resultado += v1[i]*v2[i];
    }
    return resultado;
}

int main(){
    
    int v1[5];
    int v2[5];
    
    cout << "v1" << endl;
    for(int i = 0; i < 5; i++){
        cout << i << ": ";
        cin >> v1[i];
    }
    
    cout << "v2" << endl;
    for(int i = 0; i < 5;i++){
        cout << i << ": ";
        cin >> v2[i];
    }

    cout << "Tus arrays son: " << endl;
    for(int i = 0; i < 5; i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < 5; i++){
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << "El resultado es " << multiplicarVectores(v1,v2,5);

    return 0;
}