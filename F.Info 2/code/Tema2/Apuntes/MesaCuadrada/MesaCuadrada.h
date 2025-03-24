#pragma once
#include<iostream>
#include<string>

using namespace std;

class MesaCuadrada{
    private:
    int patas;
    float lado;
    string color;

    public:
    int getPatas();
    void setPatas(int new_patas);
    float getLado();
    void setLado(float new_lado);   
    string getColor();
    void setColor(string new_color);
};