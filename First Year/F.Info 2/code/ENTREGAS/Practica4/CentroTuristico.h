#pragma once
#include<iostream>
#include<string>

using namespace std;

class CentroTuristico{
	protected:
		static string nombre;
	private:
		int pasajeros;
	public:
		CentroTuristico();
		CentroTuristico(string nombre, int pasajeros);
		CentroTuristico(const CentroTuristico& otro);
		int getPasajeros();
		void setPasajeros(int pasajeros);
		virtual string toString();
};
