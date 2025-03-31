#pragma once
#include "CentroTuristico.h"
#include "Barco.h"

class Crucero : public Barco, public CentroTuristico {
	private:
		string destino;
	public:
		Crucero();
		Crucero(const Crucero& otro);
		Crucero& operator=(const Crucero& otro);
		string getDestino();
		void setDestino(string destino);
		virtual string toString();
};