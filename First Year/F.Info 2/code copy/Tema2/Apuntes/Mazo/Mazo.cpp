#include "Mazo.h"

int Mazo::llenarMazo(){
    Carta aux;
    for(int i = 0; i < 49; i++){
        aux.cara = "Trebol";
        aux.valor = i % 12;
        cartas[i] = aux;
    }
}

Carta Mazo::getCarta(int numero){
    return cartas[numero];
}

Carta *Mazo::robarCarta(){
    return CartaSuperior;
}

