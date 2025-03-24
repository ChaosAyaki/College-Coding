#include "CilindroRegular.h"

CilindroRegular::CilindroRegular() {
    base = Circulo();
    lateral = Rectangulo();
}

CilindroRegular::CilindroRegular(float radio, float altura) {
    base = Circulo(radio);
    lateral = Rectangulo(base.perimetro(), altura);
}

Circulo CilindroRegular::getBase() {
    return base;
}

Rectangulo CilindroRegular::getLateral() {
    return lateral;
}

void CilindroRegular::setBase(Circulo base) {
    this->base = base;
}

void CilindroRegular::setLateral(Rectangulo lateral) {
    this->lateral = lateral;
}

float CilindroRegular::volumen() {
    return base.area() * lateral.area();
}

float CilindroRegular::areaSuperficial() {
    return 2 * base.area() + lateral.area();
}

