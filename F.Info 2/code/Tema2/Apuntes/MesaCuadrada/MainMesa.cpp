#include<iostream>
#include "MesaCuadrada.h"

using namespace std;

int main(){
    MesaCuadrada mesa1;
   
    mesa1.setPatas(4); //NO PONER "mesa1.patas = 4;"
    mesa1.setColor("Negro");
    mesa1.setLado(1.5);
    cout << "La mesa tiene " << mesa1.getPatas() << " patas" << endl;
    cout << "Tiene " << mesa1.getLado() << "m de lado" << endl;
    cout << "de color " << mesa1.getColor() << endl;
   
    return 0;
}