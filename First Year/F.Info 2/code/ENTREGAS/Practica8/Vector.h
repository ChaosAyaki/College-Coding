#pragma once
#include<iostream>
#include<iomanip>

using namespace std; 

class Vector {
	public:
	float x, y;
	friend ostream& operator<<(ostream& os, const Vector& v);
	friend istream& operator>>(istream& is, Vector& v);
};