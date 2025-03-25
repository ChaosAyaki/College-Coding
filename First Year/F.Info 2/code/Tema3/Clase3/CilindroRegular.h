#include "Circulo.h"
#include "Rectangulo.h"

class CilindroRegular {
private:
    Circulo base;
    Rectangulo lateral;

public:
    CilindroRegular();
    CilindroRegular(float radio, float altura);

    Circulo getBase();
    Rectangulo getLateral();

    void setBase(Circulo base);
    void setLateral(Rectangulo lateral);

    float volumen();

    float areaSuperficial();
};
