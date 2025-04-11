#pragma once 
#include<iostream>
#include<string>

using namespace std;

class Cuenta {
	private:
		string numero;
		float saldo;
	public:
		Cuenta();
		Cuenta(string numero, float saldo);
		bool const operator<(const Cuenta& otra);
		Cuenta operator+(const float& monto);
		friend ostream& operator<<(ostream &os, Cuenta& cuenta);
		void setNumero(string nuevo_numero);
		string getNumero();
		void setSaldo(float nuevo_saldo);
		float getSaldo();
		string toString();
};

