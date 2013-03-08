/*** STACKTEST ***/
#include "Stack.h"
#include<iostream>

using namespace std;

int main()
{
    int num;
    cout<<"Enter the number of items: ";
    cin >>num;

    Stack s01(num);
    
    s01.Push(1);
    s01.Push(2);
    s01.Push(3);
    s01.Push(4);

    s01.Print();

    s01.Pop();
    
    s01.Print();

	s01.Pop();
	s01.Pop();
	s01.Pop();
	s01.Pop();
	s01.Pop();
	
	s01.Print();
}
