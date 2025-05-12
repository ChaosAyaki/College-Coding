#pragma once
#include <string>
using namespace std;

class Estudiante {
private:
    string nombre;
    long int DNI;
    float puntaje_acumulado;

public:
    static bool * ordenamiento_por_DNI;
    Estudiante();
    Estudiante(string nombre, long int dni);
    Estudiante(string nombre, long int dni, float puntaje);

    string getNombre();
    long int getDNI();
    float getPuntajeAcumulado();

    void setNombre(string nombre);
    void setDNI(long int dni);
    void setPuntajeAcumulado(float puntaje);

    string toString();
    bool operator<(const Estudiante& otro) const;

    friend ostream& operator<<(ostream& os, Estudiante& estudiante);
    friend istream& operator>>(istream& is, Estudiante& estudiante);
};
