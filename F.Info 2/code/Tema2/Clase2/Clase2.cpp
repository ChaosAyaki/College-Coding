#include <iostream>
#include "utils.h"
#include "MesaCuadrada.h"

using namespace std;



int main()
{
    int codigo_ejemplo = 2;

    switch (codigo_ejemplo)
    {
        case 1:
        {   
            Cuenta cuentaUsuario, * ptrCuenta;
            ptrCuenta = &cuentaUsuario;

            ptrCuenta->nombre = "Maria";
            (*ptrCuenta).nombre = "Julieta";
            
            cout << "Nombre: " << cuentaUsuario.nombre << endl;
            break;
        }
        case 2:{
            MesaCuadrada mi_mesa; // declaración
            // mi_mesa.patas = 4; // ERRROR! Patas es un atributo protegido
            mi_mesa.setPatas(4); // setters
            mi_mesa.setColor("Blanca");
            mi_mesa.setLado(7.0);
            cout << "La mesa tiene:" << endl; // getters
            cout << mi_mesa.getPatas() << " patas" << endl;
            cout << mi_mesa.getLado() << "m. de lado" << endl;
            cout << "y es " << mi_mesa.getColor() << endl;

            break;}
        case 3:{

            MesaCuadrada mi_mesa;
            mi_mesa.setPatas(4);
            mi_mesa.setColor("Blanca");
            mi_mesa.setLado(7.0);
            cout << "La mesa tiene:" << endl;
            cout << mi_mesa.getPatas() << " patas" << endl;
            cout << mi_mesa.getLado() << "m. de lado" << endl;
            // cout << "tiene un área de: " << mi_mesa.obtenerArea() << endl;

            cout << "y es " << mi_mesa.getColor() << endl;

            break;}
        case 4:{
            break;}

        default:{
            cout << "Caso default" << endl;
            break;}
    }

    return 0;}
