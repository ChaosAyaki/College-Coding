#include "CampoElectricoEsferaConductora.h"

CampoElectricoEsferaConductora::CampoElectricoEsferaConductora() : CampoElectrico(){
    this->radio_esfera = 0;
}

CampoElectricoEsferaConductora::CampoElectricoEsferaConductora(float radio_esfera, float carga, float* posicion, string nombre) : CampoElectrico(carga, posicion, nombre){
    this->radio_esfera = radio_esfera;
}

float CampoElectricoEsferaConductora::calcularIntensidad(float* posicion){
    //Implementar 
}

float* CampoEletricoEsferaConductora::calcularDireccion(float* posicion){
    //Implementar
}

virtual string CampoElectricoEsferaConductora::toString(){
    string s = "El campo electrico de la esfera conductora " + nombre + " con radio " + to_string(radio_esfera);
    return s;
}

virtual ~CampoElectricoEsferaConductora();
