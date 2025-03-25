#include<iostream>

using namespace std;

class coche{
    private:
    string nombre;
    double gasolina;

    public:
    string matricula;
    double recorrido;
    string getNombre();
    double getGasolina();
    void setNombre(string nuevoNombre);
    void setGasolina(double litros);
    double getRecorrido();
    void setRecorrido(double distancia);
    string getMatricula();
    void setMatricula(string nuevaMatricula);
    void repostar(double litros);
    double gastoGasolina100km;
    void setgastoGasolina(float litrosPor100Km);
    double gasolinaGastada;
    void consumoGasolina(double consumo, float litrosPor100Km);
    double getConsumoGasolina();
    float depositoMaximo;
    void setDepositoMaximo(float litros);
    float getDeposito();
};