#include<iostream>
#include<string>
#include<cmath>

using namespace std;

class CampoVectorial{
    protected:
        string nombre;
    public:
        CampoVectorial();
        CampoVectorial(string nombre);
        float calcularIntensidad(float posicion) = 0;
        float* calcularDireccion(float posicion) = 0;
        string getNombre();
        static float dist(float* punto1, float* punto2);
        virtual string toString();
};