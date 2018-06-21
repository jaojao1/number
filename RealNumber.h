fndef RealNumber_h
#define RealNumber_h
#include"AbstractNumber.h"
#include<iostream>
class RealNumber :public AbstractNumber
{
public:
	RealNumber()
	{};
	RealNumber(double n);
	virtual RealNumber& add(const RealNumber& other);
	virtual RealNumber& mul(const RealNumber& other);
	virtual void print();
private:
	double value;
};
#endif
