#include "MesaCuadrada.h"

int MesaCuadrada::getPatas(){
    return patas;
}

void MesaCuadrada::setPatas(int new_patas){
    patas = new_patas;
}

float MesaCuadrada::getLado(){
    return lado;
}

void MesaCuadrada::setLado(float new_lado){
    lado = new_lado;
}

string MesaCuadrada::getColor(){
    return color;
}

void MesaCuadrada::setColor(string new_color){
    color = new_color;
}