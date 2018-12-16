#include<iostream>

using namespace std;

class Base
{
private:
	int xValue = 11;
	int yValue = 21;
public:
	Base()
	{
		cout << "Base Class Constructor." << endl;
		cout << "X Value in Scope: " << xValue << endl;
		cout << "Y Value in Scope: " << yValue << endl;
	}
	void setXvalue(int sXvalue)
	{
		xValue = sXvalue;
	}
	void setYvalue(int sYvalue)
	{
		yValue = sYvalue;
	}
	int getXvalue()
	{
		return xValue;
	}
	int getYvalue()
	{
		return yValue;
	}
};
class Derived :public Base
{
public:
	int newXvalue, newYvalue;
	Derived()
	{
		cout << "Derived Class Constructor." << endl;
		
	}
	
	
};

int main()
{
	Base();
	Derived();

	system("PAUSE");
	return 0;
}