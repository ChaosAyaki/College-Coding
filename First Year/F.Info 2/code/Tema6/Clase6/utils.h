#include <iostream>
#include<array>


#include "Vector2D.h"
using namespace std;

array<float, 5> crear_arreglo(){
    array<float, 5> numeros = {1, 2, 3, 4, 5};
    return numeros;
}

ostream & operator<<(ostream &os, Vector2D& v){
    os << "(" << v.x << ", " << v.y << ")";
    return os;
}