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
    float distancia;
    distancia = dist(posicion,this->posicion);  
    if(distancia == 0){
        return 0;
    } else {
        return (carga/(distancia*distancia));
    }
}

float CampoEletrico::calcularDireccion(float* posicion){
    float* direccion = new float[2];
    float distancia = dist(posicion, this->posicion);
    if(distancia == 0){
        direccion(0) = 0;
        direccion(1) = 1;
    } else {
        direccion[0] = (posicion[0] - this->posicion[0]) / distancia;
        direccion[1] = (posicion[1] - this->posicion[1]) / distancia;
    }
    return direccion;
}

float CampoElectrico::setCarga(float carga){
    this->carga = carga;
}

virtual string CampoElectrico::toString(){
    string s = "El campo electrico " + nombre + " y tiene carga " + to_string(carga);
    return s;
}

virtual ~CampoElectrico();