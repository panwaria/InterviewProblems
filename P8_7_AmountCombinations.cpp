#include <iostream>

using namespace std;

int DENOMINATION[4] = {1, 5, 10, 25};

int findWays(int num)
{
	if(num == 0)
		return 1;
	else if (num > 0)
	{
		int count = 0;
		for (int i = 0; i < 4; i++)
            count += findWays(num - DENOMINATION[i]);
            
		return count;
	}
	
	return 0;
}


int main()
{
	int num = 0;
	int numWays = 0;
	
	cout<<"Enter the amount: ";
	cin>>num;
	
	numWays = findWays(num);
	cout<<numWays;
	
	return 0;
}
