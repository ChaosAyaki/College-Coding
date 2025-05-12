#include "Conductor.h"

Conductor::Conductor()
{
    this->nombre_completo = "-";
    this->DNI = "-";
    this->puntuacion = 0;
    this->num_viajes = 0;
    this->coche = nullptr;
}

Conductor::Conductor(string nombre_completo, string DNI, float puntuacion, int num_viajes)
{
    this->nombre_completo = nombre_completo;
    this->DNI = DNI;
    this->puntuacion = puntuacion;
    this->num_viajes = num_viajes;
    this->coche = coche;
}

Conductor::~Conductor()
{
    this->coche = nullptr;
}

string Conductor::getNombreCompleto()
{
    return this->nombre_completo;
}

string Conductor::getDNI()
{
    return this->DNI;
}

float Conductor::getPuntuacion()
{
    return this->puntuacion;
}

int Conductor::getNumViajes()
{
    return this->num_viajes;
}

Coche* Conductor::getCoche()
{
    return this->coche;
}

void Conductor::setNombreCompleto(string nombre_completo)
{
    this->nombre_completo = nombre_completo;
}

void Conductor::setDNI(string DNI)
{
    this->DNI = DNI;
}

void Conductor::setPuntuacion(float puntuacion)
{
    this->puntuacion = puntuacion;
}

void Conductor::setNumViajes(int num_viajes){
    this->num_viajes = num_viajes;
}

void Conductor::setCoche(Coche* coche)
{
    this->coche = coche;
}

