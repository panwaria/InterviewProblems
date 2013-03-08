#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ifstream myFile ("TestFile.txt");
	
	if(myFile.is_open())
	{
        int num;
		cout<<"Enter the number of last lines to be read: ";
		cin>>num;
		string *line = new string[num];
		int count  = 0;
		while(myFile.good())
		{
			getline(myFile, line[count % num]);
			//cout<<"line["<<count%num<<"]="<<line[count % num]<<endl;
			count++;
		}

		int start = 0;
		if (count >= num)
		{
			start = count % num;
			count = num;
		}
		
		for (int i = 0; i < count; i++)
		{
			cout<<line[(i + start)%num]<<endl;
		}
		
		myFile.close();
	}
	
	return 0;
}
			
