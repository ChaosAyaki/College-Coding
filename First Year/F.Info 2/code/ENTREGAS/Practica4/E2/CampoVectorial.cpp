#include "CampoVectorial.h"

CampoVectorial::CampoVectorial(){
    this->nombre = "";
}

CampoVectorial::CampoVectorial(string nombre){
    this->nombre = nombre;
}

string CampoVectorial::getNombre(){
    return nombre;
}

float CampoVectorial::dist(float* punto1, float* punto2){
    float p1, p2, resultado;
    p1 = punto1[0] - punto2[0];
    p2 = punto1[1] - punto2[1];
    resultado = sqrt(p1*p1 + p2*p2);
}

virtual string CampoVectorial::toString(){
    string s = "nombre del campo es " + nombre;
    return s;
}

virtual ~CampoVectorial();