#include "Vector2D.h"

Vector2D::Vector2D(){
    x = 0;
    y = 0;
}

Vector2D::Vector2D(float x, float y){
    this->x = x;
    this->y = y;
}
float Vector2D::getX(){
    return x;
}

float Vector2D::getY(){
    return y;
}

bool Vector2D::operator< (const Vector2D& otro) const{
    return (x*x + y*y) < (otro.x*otro.x + otro.y*otro.y);
}

float Vector2D::modulo(){
    return sqrt(x*x + y*y);
}

