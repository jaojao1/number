nclude"RealNumber.h"
#include<iostream>
using namespace std;
RealNumber&RealNumber::add(const RealNumber& other)
{
	this->value = this->value + other.value;
	return *this;
}
RealNumber::RealNumber(double n)
{
	value = n;
}
RealNumber&RealNumber::mul(const RealNumber& other)
{
	this->value = this->value*other.value;
	return *this;
}
void RealNumber::print()
{
	cout << this->value<<endl;
}
