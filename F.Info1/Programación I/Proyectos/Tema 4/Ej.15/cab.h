#include <iostream>
#define MAX_COMPLEJOS 100
using namespace std;

struct Complejo {
    double real;
    double imaginario;
};

void leerVectorComplejos(Complejo vector[], int n);
void mostrarVectorComplejos(const Complejo vector[], int n);
Complejo sumarComplejos(const Complejo vector[], int n);
Complejo calcularMediaComplejos(const Complejo suma, int n);
void mostrarComplejo(const Complejo c);
