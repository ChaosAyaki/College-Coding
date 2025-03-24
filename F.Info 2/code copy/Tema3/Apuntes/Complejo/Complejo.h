#include<iostream>

using namespace std;

class Complejo{
    private:
        float real;
        float imagen;
    public:
        Complejo(); //Constructor que se definira en el .cpp 
        ~Complejo(); //Destructor que libera memoria en el main
        Complejo(float real, float imagen);
        Complejo(float num, bool isReal);   
        void setReal(float real);
        void setImag(float imagen);
        void setRealImag(float real, float imagen);
        float getReal();
        float getImag();
};