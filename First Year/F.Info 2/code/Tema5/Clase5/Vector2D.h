#pragma once
#include "Complejo.h"

class Vector2D
{
private:
    float x;
    float y;
public:
    Vector2D();
    Vector2D(float x, float y);

    Vector2D(const Complejo& comp);

    float getX();
    float getY();

    friend void graficaModulo(Vector2D v);
    friend ostream & operator<<(ostream &os, Vector2D& v);
    friend istream & operator>>(istream& is, Vector2D& v);

	friend bool comparaModulo(Vector2D v, Complejo c);

    float modulo();

	bool operator<(const Vector2D& otro);
};
