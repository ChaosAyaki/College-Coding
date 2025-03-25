#include "paquete.h"

class PaqueteComun : public Paquete {
	private: 
		float peso;
	public:
		static float precio_por_kg;
		PaqueteComun();
		PaqueteComun(int id);
		PaqueteComun(int id, float peso);
		float getPeso();
		string toString();
};