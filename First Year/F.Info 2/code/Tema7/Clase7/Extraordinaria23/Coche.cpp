#include "Coche.h"

Coche::Coche()
{
    this->matricula = "-";
    this->marca = "-";
    this->modelo = "-";
    this->anho = 0;
}

Coche::Coche(string matricula, string marca, string modelo, int anho)
{
    this->matricula = matricula;
    this->marca = marca;
    this->modelo = modelo;
    this->anho = anho;
}

string Coche::getMatricula()
{
    return this->matricula;
}

string Coche::getMarca()
{
    return this->marca;
}

string Coche::getModelo()
{
    return this->modelo;
}

int Coche::getAnho()
{
    return this->anho;
}

void Coche::setMatricula(string matricula)
{
    this->matricula = matricula;
}

void Coche::setMarca(string marca)
{
    this->marca = marca;
}

void Coche::setModelo(string modelo)
{
    this->modelo = modelo;
}

void Coche::setAnho(int anho)
{
    this->anho = anho;
}

