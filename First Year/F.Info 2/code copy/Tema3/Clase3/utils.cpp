#include <iostream>

#include "Complejo.h"
#include "utils.h"

using namespace std;

void crearComplejoDentroDeFuncion() {
    Complejo c8 = Complejo(8.8, 4.4);
    cout << "c8 tiene valor: " << c8.getReal() << "+ " << c8.getImag() << "i" << endl;
    cout << "El objeto c8 se eliminara al salir de la funcion" << endl;
}