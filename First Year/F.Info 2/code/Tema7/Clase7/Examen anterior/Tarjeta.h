#pragma once
#include <iostream>

using namespace std;

class Tarjeta{
private: 
    int ID;
    int nivel_acceso;
public:
    Tarjeta();
    Tarjeta(int ID, int nivel_acceso);
    Tarjeta(const Tarjeta &totra);

    int getID();
    int getNivelAcceso();

    void setID(int ID);
    void setNivelAcceso(int nivel_acceso);

    friend ostream & operator << (ostream &os, Tarjeta &t);
    friend istream & operator >> (istream &is, Tarjeta &t);

};