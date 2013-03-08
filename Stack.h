/** STACK IMPLEMENTATION **/
#include<iostream>
using namespace std;

class Stack
{
	int top;
	int SIZE;
	int *items;
	
public:
	int stackID;
	
	Stack(int size, int id)
	{
		stackID = id;
		
		top = 0;
		SIZE = size;
		items = new int [SIZE];

		for (int i = 0; i < SIZE; i++)
		{
			items[i] = 0;
		}
	}
	
	Stack(int size)
	{
        stackID = 0;
		top = 0;
		SIZE = size;
		items = new int [SIZE];
		
		for (int i = 0; i < SIZE; i++)
		{
			items[i] = 0;
		}
	}
	
	~Stack()
	{
		delete[] items;
	}
	
	void Push(int val)
	{
		if(isFull())
		{
			cout<<"\nSTACK::"<<stackID<<" is FULL, cannot push value any more.";
			return;
		}
		
		items[top++] = val;
		cout<<"\n"<<val<<" is successfully PUSHED on to STACK::"<<stackID<<".";
	}
	
	int Pop()
	{
		if(isEmpty())
		{
			cout<<"\nSTACK::"<<stackID<<" is already empty";
			return -1;
		}
		
		int val = items[top-1];
		items[top-1] = 0;
		top--;
		
		cout<<"\n"<<val<<" is successfully POPPED from STACK::"<<stackID<<".";
		return val;
	}
	
	bool isFull()
	{
		return top == SIZE;
	}
	
	bool isEmpty()
	{
		return top == 0;
	}

	void Print()
	{
		cout<<"\n\nThe STACK::"<<stackID<<" has following elements";
		cout<<"\n------------------\n";
		for(int i = top-1; i >= 0; i--)
		{
			cout<<"\t"<<items[i]<<endl;
		}
		cout<<"------------------\n";
	}
	
	void InitForTowerOfHanoi()
	{
		for (int i = SIZE; i >= 1; i--)
			Push(i);
	}
};
        
        
        
        
             
