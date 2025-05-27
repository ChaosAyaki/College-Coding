#include"Tarjeta.h"

Tarjeta::Tarjeta(){
    ID = -1;
    nivel_acceso = -1;
}

Tarjeta::Tarjeta(int ID, int nivel_acceso){
    this->ID = ID;
    this->nivel_acceso = nivel_acceso;
}

Tarjeta::Tarjeta(const Tarjeta &otra){
    ID = otra.ID;
    nivel_acceso = otra.nivel_acceso;
}

int Tarjeta::getID(){
    return ID;
}

int Tarjeta::getNivelAcceso(){
    return nivel_acceso;
}

void Tarjeta::setID(int ID){
    this->ID = ID;
}

void Tarjeta::setNivelAcceso(int nivel_acceso){
    this->nivel_acceso = nivel_acceso;
}