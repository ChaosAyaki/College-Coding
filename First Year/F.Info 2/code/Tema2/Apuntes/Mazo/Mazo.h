#include "utils.h"

class Mazo{
    private:
    Carta cartas[48];
    Carta *CartaSuperior;

    public: 
    int numeroCartas;
    int llenarMazo();
    Carta getCarta(int numero);
    Carta* robarCarta();
    void mezclarMazo();
};