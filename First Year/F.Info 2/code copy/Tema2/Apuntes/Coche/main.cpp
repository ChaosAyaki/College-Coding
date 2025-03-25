#include<iostream>
#include "coche.h"

using namespace std;

int main(){
    coche coche1;
    string modelo, matricula, respuesta;
    float capacidad, litrosPor100Km, maximo, litros;
    double distancia;

    cout << "Que modelo es tu coche? ";
    cin >> modelo;
    coche1.setNombre(modelo);

    cout << "Deposito maximo de tu coche? ";
    cin >> maximo;
    coche1.setDepositoMaximo(maximo);

    do{
        cout << "Cuantos litros de gasolina tiene tu coche? ";
        cin >> capacidad;
        coche1.setGasolina(litros);
    }while(capacidad > coche1.getDeposito());

    cout << "Cuanto gasta tu coche a los 100km? ";
    cin >> litrosPor100Km;
    coche1.setgastoGasolina(litrosPor100Km);   
    
    cout << "Cual es la matricula de tu coche? ";
    cin >> matricula;
    coche1.setMatricula(matricula);
    
    cout << "Quieres repostar gasolina? ";
    cin >> respuesta;
    if(respuesta == "si" || respuesta == "Si" || respuesta == "SI"){
        do{
            cout << "Cuantos litros quieres repostar? ";
            cin >> litros;
            coche1.repostar(litros);
        }while(litros > coche1.getDeposito());
        cout << "Tienes un total de " << coche1.getGasolina() << " litros de gasolina. " << endl;
    }

    cout << "Cuantos km has recorrido? ";
    cin >> distancia;
    coche1.setRecorrido(distancia);

    coche1.consumoGasolina(coche1.getRecorrido(), coche1.gastoGasolina100km);

    if(coche1.getConsumoGasolina() < 0){
        cout << "No es posible que hayas recorrido esa cantidad de kilometros porque no te da la gasolina ";
    }
    else{
        cout << "Has gastado " << coche1.getConsumoGasolina() << " litros de gasolina. " << "Y te queda de deposito " << coche1.getGasolina() - coche1.getConsumoGasolina() << " litros de gasolina. " << endl;
    }

    cout << "Tu coche es " << coche1.getNombre() << " con matricula " << coche1.getMatricula();
    cout << " y ha recorrido un total de " << coche1.getRecorrido() << " km y consumido un total de " << coche1.getConsumoGasolina() << " litros de gasolina. " << endl;
    cout << "Le queda de deposito aproximadamente " << coche1.getGasolina() - coche1.getConsumoGasolina() << " litros de gasolina. " << endl;

    return 0;
}