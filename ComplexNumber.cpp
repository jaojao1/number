nclude"ComplexNumber.h"
#include<iostream>
using namespace std;
ComplexNumber::ComplexNumber(double a, double b)
{
	n1 = a;
	n2 = b;
}
ComplexNumber&ComplexNumber::add(const ComplexNumber&other)
{
	this->n1 = this->n1 + other.n1;
	this->n2 = this->n2 + other.n2;
	return *this;
}
ComplexNumber&ComplexNumber::mul(const ComplexNumber&other)
{
	double a =this->n1;
	double b = this->n2;
	double c = other.n1;
	double d = other.n2;
	this->n1 = (a*c) - (b*d);
	this->n2 = (a*d) + (b*c);
	return *this;
}
void ComplexNumber::print()
{
	cout << this->n1 << "+" << this->n2 << "i" << endl;
}
