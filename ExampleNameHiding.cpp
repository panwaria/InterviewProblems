#include <iostream>

using namespace std;

class FirstClass
{
 public:
	virtual void MethodA (int)  {	cout << "ONE!!\n"; }
 	void MethodA (int, int) {	cout << "TWO!!\n"; }
 };
 
class SecondClass : public FirstClass
{
 public:
	virtual void MethodA (int) {cout << "THREE!!\n";}
 };

class ThirdClass : public SecondClass
{
 public:
	void MethodA (int) {	cout << "FOUR!!\n"; }
 };

int main ()
{
	 FirstClass *a;
	 a = new ThirdClass;
	 a->MethodA (1);
//	 a.MethodA (1, 1);
}
