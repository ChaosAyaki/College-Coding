#include <iostream>
#include "utils.h"
#include "Complejo.h"
#include "Vector2D.h"
#include "Mochila.h"
#include <vector>
using namespace std;

template <typename T> T& encontrarMinimo(T * a, int n) {
   int i_min = 0;
    for (int i = 0; i < n - 1; i++)
		if (*(a + i) < *(a + i_min))
			i_min = i; 
    return *(a + i_min);
}


template<class T, class U> bool comparaModulo(T v, U c){
    return c.modulo() == v.modulo();
}

template<class T> T seleccionaMenor(T a, T b){
    return a < b ? a : b;
}

template<typename T, typename U> void direcciones(T a, U b, T *ptr1, U *ptr2){
    *ptr1 = a;
    *ptr2 = b;
}
int main()
{
    int codigo_ejemplo;
    cout << "Ingrese el numero de ejemplo que desea ejecutar: ";
    cin >> codigo_ejemplo;

    switch (codigo_ejemplo)
    {
        case 1:
        {   
            Complejo c1 = Complejo(3.4, 2.5);
            Complejo c2 = Complejo(2.3, 4.5);
            Complejo c3 = c1;
            cout << "El 1er numero complejo ingresado es: " << c3.getReal() << " + " << c3.getImag() << "i" << endl;
            cout << "El 2do numero complejo ingresado es: " << c2.getReal() << " + " << c2.getImag() << "i" << endl;
            Complejo c4 = c3 + c2;
            cout << "La suma de los complejos es: " << c4.getReal() << " + " << c4.getImag() << "i" << endl;
            cout << "Al sumar mediante += obtenemos: ";
            c4 += c2;
            cout << "La suma de los complejos es: " << c4.getReal() << " + " << c4.getImag() << "i" << endl;
            break;
        }
        
        case 2:
        {   
            Complejo c1 = Complejo(3.4, 2.5);
            float numero_real = 6.6, otro_nro_real = 0.1;
            Complejo c3 = c1 + numero_real;
            cout << "La suma un Complejo mas un Real es: " << c3.getReal() << " + " << c3.getImag() << "i" << endl;
            c3 *= -otro_nro_real;
            cout << "El producto de un Complejo por un Real es: " << c3.getReal() << " + " << c3.getImag() << "i" << endl;
            break;
        }

        case 3:
        {   
            float numero_real;
            float numero_imaginario;
            cout << "Ingrese la componente real: ";
            cin >> numero_real;
            cout << "Ingrese la componente imaginaria: ";
            cin >> numero_imaginario;
            Complejo c1 = Complejo(numero_real, numero_imaginario);
            cout << "El numero complejo ingresado es: " << c1.getReal() << " + " << c1.getImag() << "i" << endl;
            Complejo c2 = Complejo(1.5, 3.5);
            cout << "Realizaremos la comparacion de los numeros complejos: " << c1.getReal() << " + " << c1.getImag() << "i" << " y " << c2.getReal() << " + " << c2.getImag() << "i" << endl;
            if(c1 == c2){
                cout << "Los numeros complejos son iguales" << endl;
            }else{
                cout << "Los numeros complejos son distintos" << endl;
            }
            break;
        }
        case 4:{

            Complejo c;
            c = 5;
            Complejo d = 5;
             // 5 no es un Complejo, ni un float ni un double, es un int
            cout << "El numero complejo ingresado es: " << c.getReal() << " + " << c.getImag() << "i" << endl;
            cout << "El numero complejo ingresado es: " << d.getReal() << " + " << d.getImag() << "i" << endl;
            break;
        }
        case 5:{
            Complejo c = Complejo(3.4, 2.5);
            Vector2D v = c;
            cout << "El vector 2D es: " << v.getX() << " , " << v.getY() << endl;
            break;
        }
        case 6:{
            Vector2D v = Vector2D(3.4, 2.5);
            graficaModulo(v);
            break;
        }
        case 7:{
            Vector2D v;
            cin >> v;


            cout << v << endl;

            break;
        }
        case 8:{
            Complejo c = Complejo(3.4, 2.5);
            Vector2D v = Vector2D(-3.4, 2.5);
            if(comparaModulo(v, c)){
                cout << "Los modulos son iguales" << endl;
            }else{
                cout << "Los modulos son distintos" << endl;
            }
            break;
        }
        case 9:{
            int a[] = {1, 2, 3, 4, 5};
            cout << "El minimo es: " << encontrarMinimo(a, 5) << endl;
            float b[] = {1.1, 2.2, 3.3, 4.4, 5.5};
            cout << "El minimo es: " << encontrarMinimo(b, 5) << endl;
            break;
        }
        case 10:{
            Vector2D vectores[] = {Vector2D(1, 2), Vector2D(3, 4), Vector2D(5, 6)};
            Vector2D v = encontrarMinimo(vectores, 3);
            cout << "El minimo es: " << v << endl;
            break;
        }
        case 11:{
            Complejo c = Complejo(3.4, 2.5);
            Vector2D v = Vector2D(3, 4);
            if(comparaModulo(v, c)){
                cout << "Los modulos de " << v <<" y " << c <<" son iguales" << endl;
            }else{
                cout << "Los modulos de " << v <<" y " << c <<" son distintos" << endl;
            }

            c = Complejo(3.0, 4.0);
            v = Vector2D(3, 4);
            if(comparaModulo(c, v)){
                cout << "Los modulos de " << v <<" y " << c <<" son iguales" << endl;
            }else{
                cout << "Los modulos de " << v <<" y " << c <<" son distintos" << endl;
            }
            break;
        }
        case 12:{
            Vector2D v1 = Vector2D(3, 4);
            Vector2D v2 = Vector2D(2, 2);
            Vector2D v3 = seleccionaMenor(v1, v2);
            cout << "El menor es: " << v3 << endl;
            break;
        }
        case 13:{
            Mochila<int> m1 = Mochila<int>(5);

            for(int i = 0; i < 5; i++){
                m1.modificar(i, i);
            }
            
            cout << "El tercer dato es" <<m1.obtener(3) << endl;

            Mochila<Complejo> m2 = Mochila<Complejo>(2);

            m2.modificar(0, Complejo(3.0, 4.0));
            m2.modificar(1, Complejo(5.0, 6.0));
            Complejo c = m2.obtener(1);
            cout << "El segundo dato es" << c << endl;

            break;
        }

        default:{
            cout << "Caso default" << endl;
            break;}
    }

    return 0;
}