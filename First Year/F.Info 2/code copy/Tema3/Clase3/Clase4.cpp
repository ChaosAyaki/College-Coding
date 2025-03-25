#include <iostream>
#include "utils.h"
#include "Complejo.h"
#include "Circulo.h"
#include "Rectangulo.h"
#include "Cuadrado.h"
#include "CilindroRegular.h"
// #include "Exponencial.h"


using namespace std;

int main()
{
    int codigo_ejemplo = 0;

    cout << "Ingrese el número de ejemplo a ejecutar: ";
    cin >> codigo_ejemplo;

    switch (codigo_ejemplo)
    {
        case 1:
        {   
            cout << "Ejemplo 1" << endl;

            
            Complejo c1; // Constructor por defecto
            Complejo c2 = Complejo(); // Aqui se llama al mismo constructor pero forma explicita
            Complejo c3 = Complejo(4.5, 1.2); // Aqui se llama al constructor que recibe 2 flotantes
			
			cout << "c1 tiene valor: " << c1.getReal() << "+ " << c1.getImag() << "i" << endl;
			cout << "c2 tiene valor: " << c2.getReal() << "+ " << c2.getImag() << "i" << endl;
			cout << "c3 tiene valor: " << c3.getReal() << "+ " << c3.getImag() << "i" << endl;
            break;
        }
        case 2:{
            cout << "Ejemplo 2" << endl;
            Complejo c4 = Complejo(4.5, true); 
            Complejo c5 = Complejo(4.5, false);

            cout << "c4 tiene valor: " << c4.getReal() << "+ " << c4.getImag() << "i" << endl;
            cout << "c5 tiene valor: " << c5.getReal() << "+ " << c5.getImag() << "i" << endl;

            break;}
        case 3:{
            cout << "Ejemplo 3" << endl;

            Complejo c6 = Complejo(1, true); // 1 + 0
            {
                Complejo c7 = Complejo(4.5, 1.2);
                cout << "Los ambitos se definen con llaves" << endl;
                cout << "c7 tiene valor: " << c7.getReal() << "+ " << c7.getImag() << "i" << endl;
                cout << "El objeto c7 se eliminara al salir del ambito" << endl;
            }
            cout << "El objeto c6 no es parte de ese ambito, por lo que todavia existe" << endl;
            cout << "El objeto c7 ya no existe" << endl;

            cout << "Lo mismo sucede con c8, que se crea dentro de una funcion" << endl;
            crearComplejoDentroDeFuncion();
            cout << "El objeto c8 ya no existe" << endl;

            cout << "Al finalizar este bloque, el objeto c6 se eliminara" << endl;
            break;}
        case 4:{
            cout << "Ejemplo 4" << endl;
            cout << "Usando metodos estaticos con resolucion de ambito" << endl;
            cout << "El valor de PI es: " << Circulo::PI << endl;
            cout << "0.8 radianes equivale a: " << Circulo::radianesAGrados(0.8) << " Grados de Euler" << endl;
            Circulo c1 = Circulo(4.5);
            Circulo c2 = Circulo(4.5);

            cout << "Usando metodos estaticos desde un objeto" << endl;
            cout << "El valor de PI es: " << c1.PI<< endl;
            cout << "pi radianes equivale a: " << c1.radianesAGrados(3.14159265) << " Grados de Euler" << endl << endl;

            cout << &Circulo::PI << endl;
            cout << &c1.PI << endl;
            cout << &c2.PI << endl;
            cout << &c1 << endl;
            cout << &c2 << endl;
            cout << "Desafio, agregar un metodo estatico que permita obtener radianes a partir de grados" << endl;
            break;}

        case 5:{
            cout << "Ejemplo 5" << endl;
            cout << "Usando funciones sobrecargadas" << endl;
            cout << "Obteniendo la cuerda del circulo a X grados" << endl;
            Circulo c2 = Circulo(10);
            float radianes = 30 / Circulo::radianesAGrados(1);
            // float radianes = Circulo::gradosARadianes(30);
            float cuerda = c2.getCuerda(radianes);
            cout << "La cuerda desde el eje de abscisas a "<< radianes << " rad. es: " << cuerda << endl;
            float rad2 = 90/Circulo::radianesAGrados(1);
            cuerda = c2.getCuerda(radianes, rad2);
            // cuerda = c2.getCuerda(radianes, Circulo::gradosARadianes(90));
            cout << "La cuerda entre los angulos "<< radianes << " rad. y " << rad2 << " es: " << cuerda << endl;

            break;}
        case 6:{
            cout << "Ejemplo 6" << endl;
            cout << "Composicion y Agregacion" << endl;
            CilindroRegular cil = CilindroRegular(0.5642, 0.28208);

            cout << "El volumen del cilindro es: " << cil.volumen() << endl;
            cout << "El area superficial del cilindro es: " << cil.areaSuperficial() << endl;

            cout << "El area de la base del cilindro es: " << cil.getBase().area() << endl;
            cout << "El area lateral del cilindro es: " << cil.getLateral().area() << endl;

            break;}
        case 7:{
            cout << "Ejemplo 7" << endl;
            cout << "Herencia simple" << endl;
            Rectangulo r1 = Rectangulo(5.0, 5.0);
            Cuadrado c2 = Cuadrado(5.0);
            cout << "El area del rectangulo es: " << r1.area() << endl;
            cout << "El area del cuadrado es: " << c2.area() << endl;
            Rectangulo rects[2];
            rects[0] = r1;
            rects[1] = c2;
            cout << "El perimetro del rectangulo es: " << rects[0].perimetro() << endl;
            cout << "El perimetro del cuadrado es: " << rects[1].perimetro() << endl;
            break;}
        case 8:{
            cout << "Ejemplo 8" << endl;
            cout << "Polimorfismo" << endl;
            Rectangulo r1 = Rectangulo(3.0, 4.0);
            Cuadrado c2 = Cuadrado(5.0);
            cout << r1.toString() << endl;
            cout << c2.toString() << endl;
            Rectangulo* rects;
            rects = &c2;
            // cout << rects[0].toString() << endl;
            cout << rects->toString() << endl;
            break;}
        // case 9:{
        //     cout << "Ejemplo 9" << endl;
        //     cout << "Clases Abstractas" << endl;

        //     double coeficientes[] = {1, 2, 3};
        //     Exponencial e2 = Exponencial(coeficientes, 2);

        //     cout << "El valor de la funcion exponencial en x=2 es: " << e2.evaluar(2) << endl;
        //     cout << "La derivada de la funcion exponencial en x=2 es: " << e2.derivada(2) << endl;
        //     cout << "La integral de la funcion exponencial entre 1 y 2 es: " << e2.integral(1, 2) << endl;

            
        //     break;}

        default:{
            cout << "Caso default" << endl;
            break;}
    }

    return 0;}