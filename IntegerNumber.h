fndef IntegerNumner_h
#define IntegerNumber_h
#include<iostream>
#include"RealNumber.h"
using namespace std;
class IntegerNumber :public RealNumber
{
    public:
		IntegerNumber(int a);
		virtual IntegerNumber& add(const IntegerNumber&);
		virtual IntegerNumber& mul(const IntegerNumber&);
		virtual void print();
    private:
		int value;
};
#endif
