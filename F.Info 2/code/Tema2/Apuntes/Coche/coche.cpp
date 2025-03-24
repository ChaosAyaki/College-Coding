#include<iostream>
#include "coche.h"

using namespace std;

void coche::repostar(double litros){
    gasolina = gasolina + litros; //Basicamente si quiere repostar gasolina se le suman los litros que quiere repostar
}

void coche::setRecorrido(double distancia){
    recorrido = distancia;
}

double coche::getRecorrido(){
    return recorrido;
}

void coche::consumoGasolina(double recorrido, float litrosPor100Km){    //Calculamos cuantos litros de gasolina se han gastado = (recorrido * litrosPor100Km) / 100;
    gasolinaGastada = recorrido*gastoGasolina100km/100;
}

double coche::getConsumoGasolina(){
    return gasolinaGastada;
}


void coche:: setgastoGasolina(float litrosPor100Km){
    gastoGasolina100km = litrosPor100Km;
}

void coche::setDepositoMaximo(float litros){
    depositoMaximo = litros;
}

float coche::getDeposito(){
    return depositoMaximo;
}

string coche::getNombre(){
    return nombre;
}

void coche::setNombre(string nuevoNombre){
    nombre = nuevoNombre;
}

double coche::getGasolina(){
    return gasolina;
}

void coche::setGasolina(double litros){
    gasolina = litros;
}

void coche::setMatricula(string nuevaMatricula){
    matricula = nuevaMatricula;
}

string coche::getMatricula(){
    return matricula;
}
