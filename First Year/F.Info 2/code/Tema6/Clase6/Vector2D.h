#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class Vector2D
{
private:
    float x;
    float y;
public:
    Vector2D();
    Vector2D(float x, float y);

    float getX();
    float getY();

    friend void graficaModulo(Vector2D v);
    friend ostream & operator<<(ostream &os, Vector2D& v);
    // friend istream & operator>>(istream& is, Vector2D& v);

    float modulo();

	bool operator<(const Vector2D& otro) const;
};
