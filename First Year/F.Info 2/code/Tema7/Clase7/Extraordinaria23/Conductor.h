#pragma once
#include <iostream> 
#include "Coche.h"

using namespace std;

class Conductor
{
    private:
        string nombre_completo;
        string DNI;
        
        float puntuacion;
        int num_viajes;

        Coche* coche;

    public:
        Conductor();
        Conductor(string nombre_completo, string DNI, float puntuacion, int num_viajes);
        ~Conductor();

        string getNombreCompleto();
        string getDNI();
        float getPuntuacion();
        int getNumViajes();
        Coche* getCoche();

        void setNombreCompleto(string nombre_completo);
        void setDNI(string DNI);
        void setCoche(Coche* coche);
        void setPuntuacion(float puntuacion);
        void setNumViajes(int num_viajes);
    
        friend ostream& operator<<(ostream& os, Conductor& conductor);
         friend istream& operator>>(istream& is, Conductor& conductor);

};

