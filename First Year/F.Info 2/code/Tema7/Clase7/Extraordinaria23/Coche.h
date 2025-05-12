#pragma once
#include <iostream>

using namespace std;

class Coche{
    private:
        string matricula;
        string marca;
        string modelo;
        int anho;

    public:
        Coche();
        Coche(string matricula, string marca, string modelo, int anho);

        string getMatricula();
        string getMarca();
        string getModelo();
        int getAnho();

        void setMatricula(string matricula);
        void setMarca(string marca);
        void setModelo(string modelo);
        void setAnho(int anho);

        friend ostream& operator<<(ostream& os, Coche& coche);
         friend istream& operator>>(istream& is, Coche& coche);

};