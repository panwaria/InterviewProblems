#include <iostream>
using namespace std;

class Base
{
public:
	char* nam;
	virtual void display() { cout << nam << endl; }
};

class Derived: public Base
{
public:
	char* nam;
	void display() { cout << nam << ", " << Base::nam << endl;	}
};

int main()
{
	Derived d;
	d.nam = "Derived Class";
	//d.Base::name = "Base Class";

	// standard conversion from Derived* to Base*
	Base* bptr = &d;

	// call Base::display()
	bptr->display();
}
