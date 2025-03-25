// Debe incluirse el archivo de cabecera correspondiente
#include "MesaCuadrada.h"

// Implementación de los métodos de la clase MesaCuadrada
void MesaCuadrada::setPatas(int new_patas){
    patas = new_patas;
}
void MesaCuadrada::setLado(float new_lado){
    lado = new_lado;
}
void MesaCuadrada::setColor(string new_color){
    color = new_color;
}
int MesaCuadrada::getPatas(){
    return patas;
}
float MesaCuadrada::getLado(){
    return lado;
}
string MesaCuadrada::getColor(){
    return color;
}
// Fin de la implementación de los métodos de la clase MesaCuadrada