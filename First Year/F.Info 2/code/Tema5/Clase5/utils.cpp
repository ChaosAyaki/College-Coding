#include "utils.h"

void graficaModulo(Vector2D v)
{
    float modulo = sqrt(v.x * v.x + v.y * v.y);
    string salida = "|";
    int magnitud_en_pantalla = (int)round(modulo * 30);
    for (int i = 0; i < magnitud_en_pantalla; i++)
    {
        salida += "-";
    }
    salida += ">\n\n";
    cout << salida;
}

ostream & operator<<(ostream &os, Vector2D& v){
    return os << "Vector: (" << v.x << ", " << v.y << ")";
}

istream & operator>>(istream &is, Vector2D& v){
    return is >> v.x >> v.y;
}


ostream & operator<<(ostream &os, Complejo& c){
    return os << "Compl: " << to_string(c.real) + " + " + to_string(c.imag) + "i";
}

bool comparaModulo(Vector2D v, Complejo c)
{
    float modulo = sqrt(v.x * v.x + v.y * v.y);
    return modulo == sqrt(c.real * c.real + c.imag * c.imag);
}

