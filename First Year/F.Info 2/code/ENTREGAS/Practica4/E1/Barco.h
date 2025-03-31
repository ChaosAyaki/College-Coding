#pragma once
#include "Vehiculo.h"

class Barco : public Vehiculo {
	protected:
		float capacidad;
	public:
		Barco();
		Barco(string nombre, float capacidad);
		float getCapacidad();
		void setCapacidad(float capacidad);
		virtual string toString();
};