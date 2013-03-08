#include <iostream>
#include <cmath>

using namespace std;

int NUM = 0; // Number of rows (of course, columns too)
int *selectedColumn;

bool isColumnFine(int row)
{
	for (int i = 0; i < row; i++)
	{
		int diff = abs(selectedColumn[i] - selectedColumn[row]);
		if (diff == 0 || diff == (row - i))
		    return false;
	}
	return true;
}

void setQueen(int row)
{
	if (row == NUM)
	{
		// print the board
		for (int i = 0; i < NUM; i++)
		    cout<<selectedColumn[i] + 1<<" ";
		cout<<endl;
		
		return;
	}
	
	for (int i = 0; i < NUM; i++)
	{
		selectedColumn[row] = i;
		if(isColumnFine(row))
		{
			setQueen(row + 1);
		}
	}
}

int main()
{
	cout<<"Size of chessboard: ";
	cin>>NUM;
	
	selectedColumn = new int[NUM];
	setQueen(0);
	
	return 0;
}
