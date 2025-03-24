#include<string>
using namespace std;

class Coche{
	private:
	string color;
	string motor;
	double velocidadMaxima;
	double velocidad;
	bool encendido;
	
	public:
	
	void setColor(string& nuevoColor);
	void setMotor(string& nuevoMotor);
	void setVelocidadMaxima(double nuevaVelocidadMaxima);
	void arrancar();
	void apagar();
	void frenar(double decremento);
	void acelerar(double incremento);
	bool isEncendido();
	double obtenerVelocidad();
};