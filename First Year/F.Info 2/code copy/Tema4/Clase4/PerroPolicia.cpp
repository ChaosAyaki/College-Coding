#include "PerroPolicia.h"

PerroPolicia::PerroPolicia() : Perro() {
}

PerroPolicia::PerroPolicia(string nombre, string especie, string duenho, string raza, int anhos_servicio) : Perro(nombre, especie, duenho, raza) {
	this->anhos_servicio = anhos_servicio;
}

string PerroPolicia::ladrar() {
	string salida = " El PERRO POLICIA " + nombre + " ESTÁ LADRANDO.";
	return salida;
}

bool PerroPolicia::buscarObjeto(string objeto) {

	int distancia_al_objeto = rand() % objeto.length() + 1;
	if (objeto[0] < 20) {
		return true;
	}
	else{
		return false;
	}
}


string PerroPolicia::toString() {
	string perro = "Clase Perro Policia: Anhos de Servicio: " + to_string(anhos_servicio) +": Duenho: " + duenho + ". Raza: " + raza + ". " + AnimalTerrestre::toString();
	return perro;
}