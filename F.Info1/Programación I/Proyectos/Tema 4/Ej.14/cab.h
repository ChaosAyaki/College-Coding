#include <iostream>
using namespace std;

struct Matriz {
    int nFil, nCol;
    int m[100][100];
};

void leerMatriz(Matriz &matriz);
void mostrarMatriz(const Matriz &matriz);
int sumaDebajoDiagonal(const Matriz &matriz);
