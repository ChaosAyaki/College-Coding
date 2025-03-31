#include "CampoElectrico.h"

class CampoElectricoEsferaConductora : public CampoElectrico{
    protected: 
        float radio_esfera;
    private:
        CampoElectricoEsferaConductora();
        CampoElectricoEsferaConductora(float radio_esfera, float carga, float* posicion, string nombre);
        float calcularIntensidad(float* posicion);
        float* calcularDireccion(float* posicion);
        virtual string toString();
};