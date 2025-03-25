/*
Realizado por: Pablo Dominguez Corbacho
Fecha:29/09/2024

Descripcion: Es un programa que calcula las siguentes operaciones

*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
	int a, b;
    float c, d;

    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    cout << "Introduce el valor de c: ";
    cin >> c;
    cout << "Introduce el valor de d: ";
    cin >> d;

    cout << "a) a/b = " << a / b << endl;

    cout << "b) a/c = " << a / c << endl;

    cout << "c) a % b = " << a % b << endl;

    cout << "d) a - b - c + d = " << a - b - c + d << endl;

    cout << "e) 5 * c - 4 * a = " << 5 * c - 4 * a << endl;

    cout << "f) a * b / c = " << a * b / c << endl;

    cout << "g) a * (d / c) = " << a * (d / c) << endl;

    cout << "h) a * b % b = " << (a * b) % b << endl;

    cout << "i) a = --b, resultado de a: " << (a = --b) << endl;

    cout << "j) b = a--, resultado de b: " << (b = a--) << endl;

    cout << "k) a += b, resultado de a: " << (a += b) << endl;

    cout << "l) a = b, resultado de a: " << (a = b) << endl;

    cout << "m) !a, resultado: " << !a << endl;

    cout << "n) (a == b) || (c > d): " << ((a == b) || (c > d)) << endl;

    cout << "n*) (a > b) && (b > c) || (d < c): " << ((a > b) && (b > c) || (d < c)) << endl;

    cout << "o) a * 3 || b * 2 && (3 * 2): " << (a * 3 || b * 2 && (3 * 2)) << endl;

    return 0;
}
