#include<iostream>

using namespace std;

int main()
{
	int len1 , len2;
	
	cout << "Enter the length of the normal string: "; cin>> len1;
	char * s1 = new char[len1];
	cout << "\nEnter the normal string: "; cin>>s1;
	
	cout << "Enter the length of the reg exp string: "; cin>> len2;
	char * s2 = new char[len2];
	cout << "\nEnter the reg exp string: "; cin>>s2;

	if (len2 > len1)
	{
		cout << "\nDOESN'T MATCH!";
		delete[] s1;
		delete[] s2;
		return 0;
	}
	
	int p = 0, q = 0;
	
	while (p < len1 && q < len2)
	{
		if(s2[q] != '*' && s2[q] != '?' && s2[q] == s2[p])
		{
			p++; q++; continue;
		}
		else if (s2[q] == '*')
		{
			while(s2[++q] != '*');
			if(s2[q] == '?')
			    p++;
			else
			
			q++;
			while (s1[p] != s2[q])
			{
				p++;
				//if (p == len1)
			}
				
		}
	}
	
	return 0;
}
