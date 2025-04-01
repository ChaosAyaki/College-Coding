#include "CampoElectricoEsferaConductora.h"

CampoElectricoEsferaConductora::CampoElectricoEsferaConductora() : CampoElectrico(){
    this->radio_esfera = 0;
}

CampoElectricoEsferaConductora::CampoElectricoEsferaConductora(float radio_esfera, float carga, float* posicion, string nombre) : CampoElectrico(carga, posicion, nombre){
    this->radio_esfera = radio_esfera;
}

float CampoElectricoEsferaConductora::calcularIntensidad(float* posicion){
    float distancia = dist(posicion, this->posicion);
    if(distancia < radio_esfera){
        return 0;
    } else {
        return (carga/(distancia*distancia)); 
    }
}

float* CampoEletricoEsferaConductora::calcularDireccion(float* posicion){
    float* direccion = new float[2];
    float distancia = dist(posicion, this->posicion);
    if(distancia < radio_esfera){
        direccion[0] = 0;
        direccion[1] = 1;
    } else {
        direccion[0] = (posicion[0] - this->posicion) / distancia;
        direccion[1] = (posicion[1] - this->posicion) / distancia;
    }
}

virtual string CampoElectricoEsferaConductora::toString(){
    string s = "El campo electrico de la esfera conductora " + nombre + " con radio " + to_string(radio_esfera);
    return s;
}

virtual ~CampoElectricoEsferaConductora();

