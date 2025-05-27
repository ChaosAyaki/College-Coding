#pragma once
#include<iostream>
#include"Tarjeta.h"

using namespace std;

class Persona{
private:
    string nombre;
    string DNI;
    Tarjeta tarjeta;

public:
    Persona();
    Persona(string nombre, string DNI);

    string getNombre();
    string getDNI();
    Tarjeta getTarjeta();

    void setNombre(string nombre);
    void setDNI(string DNI);
    void setTarjeta(const Tarjeta tarjeta);

    bool operator==(const string &dni) const;

    friend ostream & operator << (ostream &os, Persona &p);
    friend istream & operator >> (istream &is, Persona &p);
};