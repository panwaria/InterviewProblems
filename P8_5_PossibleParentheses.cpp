#include <iostream>

using namespace std;

void possiblePar(int l, int r, char *str, int count)
{
	if(l < 0 || r < l) return;
	
	if (l == 0 && r == 0)
	{
		for (int i = 0; i < count; i++)
			cout << str[i];// << " ";
		cout << endl;
		return;
	}
	
	if (l > 0)
	{
		str[count] = '(';
	    possiblePar(l-1, r, str, count + 1);
	}
	
	if (r > l)
	{
		str[count]= ')';
	    possiblePar(l, r-1, str, count + 1);
	}
}

int main()
{
	int num;
	
	cout << "Enter the number of parentheses pairs: ";
	cin >> num;

	char * str = new char [2*num];
	possiblePar(num, num, str, 0);
	return 0;
}
