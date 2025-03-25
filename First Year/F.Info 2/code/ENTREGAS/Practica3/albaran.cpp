#include"albaran.h"

Albaran::Albaran(){
    this->contenido = "";
    this->cantidad = 0;
}

Albaran::Albaran(string contenido, int cantidad){
    this->contenido = contenido;
    this->cantidad = cantidad;
}

string Albaran::getContenido(){
    return contenido;
}

int Albaran::getCantidad(){
    return cantidad;
}

string Albaran::toString(){
    string s = contenido;
    return contenido;
}