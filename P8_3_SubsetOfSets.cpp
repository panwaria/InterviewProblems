#include <iostream>
#include <vector>

using namespace std;

#define SETSIZE 5
char arr[SETSIZE] = {'a', 'b', 'c', 'd', 'e'};

vector<char*> func(char *arr, int numElements, int setSize)
{
	vector<char *> finalSet;
	if(numElements == 0 || setSize == 0)
		return finalSet;

	for (int i = 0; i < numElements; i++)
	{
		// Set1
		char set1 = arr[i];	// {a}

		// Set2
		char *arr2 = new char[numElements - 1 - i];	// (b, c ,d)
		for (int j = i+1; j < numElements; j++)
			arr2[j-i-1] = arr[j];
		vector<char *> set2 = func(arr2, numElements - i - 1, setSize - 1);

		// Merging set1 and set2
		if(setSize == 1)
		{
			char * finalArr = new char[1];
			finalArr[0] = set1;
			finalSet.push_back(finalArr);
		}
		else
		{
			for (vector<char *>::iterator it = set2.begin(); it != set2.end(); it++)
			{
				char * finalArr = new char[setSize];
				finalArr[0] = set1;
				char *tempArr = *it;
				for (int k = 0; k < setSize - 1; k++)
				{
					finalArr[k+1] = tempArr[k];
				}
				finalSet.push_back(finalArr);
				delete[]  tempArr; // Freeing the earlier memory
			}
		}
	}

	return finalSet;
}

int main()
{
	for (int i = 1; i <= SETSIZE; i++)
	{
		vector<char *> finalSet = func(arr, SETSIZE, i);
		if(finalSet.size() > 0)
		{
			for(vector<char *>::iterator it = finalSet.begin(); it != finalSet.end(); it++)
			{
				char *finalSetArr = *it;
				for (int k = 0; k < i; k++)
				{
					cout<<finalSetArr[k]<<" ";
				}
				cout<<endl;
				delete[] finalSetArr;
			}
		}
	}
}
