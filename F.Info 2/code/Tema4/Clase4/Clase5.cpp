#include <iostream>
#include "PerroPolicia.h"
#include "Pato.h"


using namespace std;


int main()
{
    int codigo_ejemplo;
    cout << "Ingrese el numero del ejemplo que desea ejecutar: ";
    cin >> codigo_ejemplo;

    switch (codigo_ejemplo)
    {
        case 1:
        {   
            PerroPolicia perro = PerroPolicia("Terremoto", "Canis Familiaris", "Pastor Aleman", "Policia", 5);

            cout << "El objeto accede a los metodos de su propia clase" << endl;
            cout << perro.ladrar() << endl;
            if (perro.buscarObjeto("mochila")){
                cout << "El perro encuentra el objeto" << endl;
            }
            else{
                cout << "El perro no encuentra el objeto" << endl;
            }
            cout << "El objeto accede a los metodos de la clase inmediatemente superior" << endl;
            cout << perro.comer("pienso") << endl;

            cout << "El objeto accede a los metodos de la clase superior" << endl;
            cout << perro.andar() << endl;
            
            AnimalTerrestre *animal = &perro;
            cout << "El objeto es-una instancia de las tres clases" << endl;
            cout << animal->toString() << endl;

            break;
        }
        case 2:
        {
            Pato pato = Pato("Pato", "Anas Platyrhynchos", "Corredor", "Verde");

            cout << pato.comer("maiz") << endl;
            cout << pato.hacerCosasDePato() << endl;
            cout << pato.toString() << endl;

            cout << pato.andar() << endl;
            cout << pato.nadar() << endl;

            AnimalTerrestre *animal = &pato;
            cout << animal->toString() << endl;
            AnimalAcuatico *animal2 = &pato;
            cout << animal2->toString() << endl;
            Animal *animal3 = &pato;
            cout << animal3->toString() << endl;
        
            Animal *animal4 = new Perro("Koopa", "Canis Familiaris", "Yo", "Labrador");
            cout << animal4->toString() << endl;
            delete animal2;

            break;
        }
        case 3:
        {

            Perro perro1 = Perro("Firulais", "Canis Familiaris", "Maria", "Pastor Aleman");
            Perro perro2 = perro1;
            cout << "Mientras que\np1 es " << perro1.toString() << endl;
            cout << "p2 es " << perro2.toString() << endl;
            cout << "Normalmente, los constructores por copia copian todos los atributos" << endl;
            
            Pato pato1 = Pato("Pato", "Anas Platyrhynchos", "Mandarin", "Verde");
            Pato pato2 = pato1;
            cout << "Mientras que\np1 es " << pato1.toString() << endl;
            cout << "p2 es " << pato2.toString() << endl;
            cout << "Nuestra definicion de constructor por copia no copia todos los atributos" << endl;
            cout << "Asi se demuestra que el constructor por copia funciona" << endl;


            break;
        }
        case 4:
        {
            Pato pato1 = Pato("Pato", "Anas Platyrhynchos", "Mandarin", "Verde");
            // Construcción por copia
            Pato pato2 = pato1;
            cout << "Construccion por copia:\n" << pato2.toString() << endl;
            // Asignación por copia
            pato2 = pato1;
            cout << "Asignacion por copia:\n" << pato2.toString() << endl;
            break;
        }

        default:{
            cout << "Caso default" << endl;
            break;}
    }

    return 0;}