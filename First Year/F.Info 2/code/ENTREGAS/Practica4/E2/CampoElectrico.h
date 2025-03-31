#include "CampoVectorial.h"

class CampoElectrico : public CampoVectorial{
    protected:
        float carga;
        float posicion[2];
        static float epsilon = 1.0;
    private:
        CampoElectrico();
        CampoElectrico(float carga, float* posicion, string nombre);
        float calcularIntensidad(float* posicion);
        float* calcularDireccion(float* posicion);
        float getCarga();
        void setCarga(float carga);
        virtual string toString();
};
