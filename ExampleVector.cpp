#include<iostream>
#include<vector>

using namespace std;

int main()
{
	// TESTING VECTOR<INT>
	vector<int> temp (4, 100);
	temp[0] = 1;
	temp[2] = 2;
	
	vector<int>::iterator it = temp.begin();
	while(it != temp.end())
	{
		cout<<*it<<" ";
		it++;
	}
	
	cout<<endl;

	// TESTING VECTOR<STRING>
	vector<string> tempString (4, "hello");
	tempString[0] = "HI";
	tempString[2] = "BYE";

	vector<string>::iterator itString = tempString.begin();
	while(itString != tempString.end())
	{
		cout<<*itString<<" ";
		itString++;
	}
	
	return 0;
}
