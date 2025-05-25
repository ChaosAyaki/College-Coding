#include "Vector.h"

istream& operator>>(istream& is, Vector& v){
	cout << "Introducir valor de x: ";
	is >> v.x;
	cout << "Introducir valor de y: ";
	is >> v.y;
	return is;
}

ostream& operator<<(ostream& os, const Vector& v){
	os << "(" << left << setw(10) << fixed << setprecision(3) << v.x << "," << right << setw(10) << fixed << setprecision(3) << v.y << ")";
	return os;
}