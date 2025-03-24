#include "EstimadorDeVelocidad.h"

int main(){
    float pos[2];

    EstimadorDeVelocidad estimador;

    estimador.reiniciar();

    while(true){
        cout << "Ingrese pos actual x: " << endl;
        cin >> *pos;

        cout << "Ingrese pos actual x: " << endl;
        cin >> *(pos+1);

        estimador.setPosicionActual(p_a_pos);
        estimador.imprimirDatos();
    }

    return 0;
}