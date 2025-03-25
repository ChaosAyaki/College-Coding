#pragma once
#include"albaran.h"
#include<iostream>
#include<string>

using namespace std;

class Paquete {
	protected:
		int id;
		int codigoDestino;
		static string nombre_empresa;
	public:
		Paquete():
		Paquete(int id);
		int getCodigoDestino();
		bool setCodigoDestino(int codigoDestino);
		virtual string toString();
		Albaran getAlbaran();
		void setAlbaran(Albaran albaran);
};