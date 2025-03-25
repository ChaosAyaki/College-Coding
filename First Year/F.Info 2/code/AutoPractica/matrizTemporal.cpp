#include<iostream>

using namespace std;

int main(){
    int m1[3][3];
    for(int i = 0; i < 3; i++){
        cout << "introduzca valor en fila " << i+1 << " ";
        for(int j = 0; j < 3; j++){
            cout << "y en columna " << j+1 << " ";
            cin >> m1[i][j];
        }
    }
    return 0;
}