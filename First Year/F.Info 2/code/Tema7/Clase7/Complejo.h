#include <iostream>

using namespace std;

class Complejo {
    private:
        double real;
        double imaginario;
    public:
        Complejo();
        Complejo(double real, double imaginario);
        void setReal(double real);
        void setImaginario(double imaginario);
        double getReal();
        double getImaginario();

        friend ostream & operator<<(ostream & os, Complejo & complejo);
        friend istream & operator>>(istream & is, Complejo & complejo);

        bool operator<(const Complejo & otro) const;
        bool operator==(const Complejo & otro) const;


        Complejo operator+(const Complejo & otro);
};