#include<iostream>
#include <cmath>

using namespace std;

class EstimadorDeVelocidad{
    private:
    float posposicion_actual[2];
    float velocidad;

    public:
    float tiempo_entre_datos;
    float *getPosicionActual();
    void setPosicionActual(float* nueva_posicion_actual);
    void imprimirDatos();
    void reiniciar();
};

