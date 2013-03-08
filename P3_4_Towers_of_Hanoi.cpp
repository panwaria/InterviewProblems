/** TOWERS OF HANOI **/

#include<iostream>
#include"Stack.h"

using namespace std;

void TowersOfHanoi(int num, Stack *T1, Stack *T2, Stack *T3);

int main()
{
    int num;
    cout<<"Enter the number of disks: ";
    cin >>num;
    
    Stack T1(num, 01), T2(num, 02), T3(num, 03);
    
    T1.InitForTowerOfHanoi();
    
    // BEFORE
	T1.Print();    T2.Print();    T3.Print();

	/* TowersOfHanoi (number of elements to be transferred, SOURCE TOWER, INTERMEDIATE TOWER, DESTINATION TOWER); */
	TowersOfHanoi(num, &T1, &T2, &T3);
	
	// AFTER
	T1.Print();    T2.Print();    T3.Print();
    
}

void TowersOfHanoi(int num, Stack *T1, Stack *T2, Stack *T3)
{

	cout<<"\nTowersOfHanoi :: "<<num<<" "<<T1->stackID<<" "<<T2->stackID<<" "<<T3->stackID<<endl;
	if(T1->isEmpty())
	{
		cout<<"Stack:"<<T1->stackID<<" is empty. Returning!"<<endl;
		return;
	}
	else if(num <= 0)
	{
		cout<<"num cannot be less than equal to 0. Returning!\n";
		return;
	}

	if(num > 1)
	{
		TowersOfHanoi(num-1, T1, T3, T2);
	}

//	T1->Print();
//  T2->Print();
//  T3->Print();

	int val = T1->Pop();
	T3->Push(val);

	if(num > 1)
	{
		TowersOfHanoi(num-1, T2, T1, T3);
	}
}
