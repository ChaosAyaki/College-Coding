#include <iostream>

using namespace std;

class MesaCuadrada{
    private:
        // Atributos Privados
        int patas;
        float lado;
        string color;

    public:
        // Métodos Públicos
        // // Setters o Modificadores
        void setPatas(int new_patas);
        void setLado(float new_lado);
        void setColor(string new_color);
        // // Getters o Selectores
        int getPatas();
        float getLado();
        string getColor();

};