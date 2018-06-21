fndef AbstractNumber_h
#define AbatractNumber_h
#include <iostream>
using namespace std;
class AbstractNumber
{
public:
	AbstractNumber() {};
	virtual AbstractNumber add(const AbstractNumber& other)
	{
		return AbstractNumber();
	};
	virtual AbstractNumber mul(const AbstractNumber& other)
	{
		return AbstractNumber();
	};
	virtual void print()
	{};
};
#endif
