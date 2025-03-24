#include<string>
#include<iostream>
using namespace std;

class Hora{
	private:
	int hora;
	int minuto;
	int segundo;
	
	public:
	void setHora(int new_Hora);
	int getHora();
	void setMinuto(int new_Minuto);
	int getMinuto();
	void setSegundo(int new_Segundo);
	int getSegundo();
	void mostrarHora();
	void reiniciar(int h, int m, int s);
	void sumarSegundos(int s);
};