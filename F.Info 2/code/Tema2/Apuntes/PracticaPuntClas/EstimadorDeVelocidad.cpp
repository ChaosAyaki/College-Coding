#include "EstimadorDeVelocidad.h"

float *EstimadorDeVelocidad::getPosicionActual(){
    return posicion_actual; //return &poosicion_actual[0];
}

void EstimadorDeVelocidad::setPosicionActual(float* nueva_posicion_actual){
    
    float pos1 = sqrt(pow(*posicion_actual, 2) + pow(*(posicion_actual + 1), 2));
    float pos2 = sqrt(pow(*nueva_posicion_actual, 2) + pow(*(nueva_posicion_actual + 1), 2));

    float diff_de_pos = pos2 - pos1;

    velocidad = diff_de_pos / tiempo_entre_datos;

    *posicion_actual = *(nueva_posicion_actual);
    *(posicion_actual + 1) = *(nueva_posicion_actual + 1);
}

void EstimadorDeVelocidad::imprimirDatos(){

    cout << "Posicion " << *posicion_actual << ", " << *(posicion_actual + 1) << endl;
    cout << "Velocidad " << velocidad << endl;

}

void EstimadorDeVelocidad::reiniciar(){
    *posicion_actual = 0;
    *(posicion_actual + 1) = 0;
    velocidad = 0;
}

