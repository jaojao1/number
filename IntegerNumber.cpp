nclude"IntegerNumber.h"
#include<iostream>
using namespace std;
IntegerNumber::IntegerNumber(int a)
{
	value = a;
}
IntegerNumber&IntegerNumber::add(const IntegerNumber& other)
{
	this->value = (this->value)+(other.value);
	return *this;
}
IntegerNumber&IntegerNumber::mul(const IntegerNumber& other)
{
	this->value = (this->value)*(other.value);
	return *this;
}
void IntegerNumber::print()
{
	cout << this->value<<endl;
}
