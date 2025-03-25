#include<iostream>
#include<string>

using namespace std;

struct Jugador{ //Definimos la estructura
    string nombre;
    int edad;
    float altura;
    string posicion;
};

struct listaJugadores{
    string nombre;
    int edad;
    float altura;
    string posicion;
};

int main(){
    Jugador chaos; //Creamos una varible de tipo estructura y le damos valores

    chaos.nombre = "ChaosAyaki";   
    chaos.edad = 19;
    chaos.altura  = 1.75;
    chaos.posicion = "Receptor";

    listaJugadores plantilla[9]; //Estructura donde la lista de jugadores son 10
    
    //Definicion de cada jugador dependiendo de la posicion del array   
    plantilla[0].nombre = "Carlos";
    plantilla[0].edad = 18;
    plantilla[0].altura = 1.70;
    plantilla[0].posicion = "Colocador";

    return 0;
}