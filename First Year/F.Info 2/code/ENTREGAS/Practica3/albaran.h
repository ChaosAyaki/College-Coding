#include<iostream>
#include<string>

using namespace std;

class Albaran {
    private:
        string contenido;
        int cantidad;
    public:
        Albaran();
        Albaran(string contenido, int cantidad);
        string getContenido();
        int getCantidad();
        string toString();
};