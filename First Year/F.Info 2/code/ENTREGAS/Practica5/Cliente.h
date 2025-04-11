#pragma once 
#include "Persona.h"
#include "Cuenta.h"

class Cliente : public Persona {
    private:
        Cuenta cuenta;
    public:
        Cliente();
        Cliente(string nombre, string DNI, Cuenta cuenta);
        Cliente(Persona persona, Cuenta cuenta);
        friend ostream& operator<<(ostream& os, Cliente& cliente);
        void setCuenta(Cuenta nueva_cuenta);
        Cuenta getCuenta();
        string toString();
};