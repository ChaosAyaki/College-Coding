#include<iostream>
#include "jugador.h"

using namespace std;

int main(){
    jugador jugador1;
    
    jugador1.setnombre("Pandepipas");
    cout << "El nombre del jugador es: " << jugador1.getnombre() << endl;
    return 0;
}