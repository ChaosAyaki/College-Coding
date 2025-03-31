#include "CampoElectrico.h"

CampoElectrico::CampoElectrico() : CampoVectorial(){
    this->carga = 0;    
    this->posicion[0] = 0;
    this->posicion[1] = 0;
}

CampoElectrico::CampoElectrico(float carga, float* posicion, string nombre) : CampoVectorial(nombre){
    this->carga = carga;
    this->posicion[0] = posicion[0];
    this->posicion[1] = posicion[1];

float CampoEletrico::calcularIntensidad(float* posicion){
    //Implementar
}

float CampoEletrico::calcularDireccion(float* posicion){
    //Implementar
}

float CampoElectrico::setCarga(float carga){
    this->carga = carga;
}

virtual string CampoElectrico::toString(){
    string s = "El campo electrico " + nombre + " y tiene carga " + to_string(carga);
    return s;
}

virtual ~CampoElectrico();