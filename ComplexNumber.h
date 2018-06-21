fndef ComplexNumber_h
#define ComplexNumber_h
#include"AbstractNumber.h"
#include<iostream>
using namespace std;
class ComplexNumber :public AbstractNumber
{
    public:
		ComplexNumber(double a, double b);
		ComplexNumber& add(const ComplexNumber&other);
		ComplexNumber& mul(const ComplexNumber&other);
		virtual void print();
    private:
		double n1;
		double n2;
};
#endif
