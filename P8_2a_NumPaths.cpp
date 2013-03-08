#include <iostream>

using namespace std;

int N = 0; // NxN matrix

int numPaths(int x, int y)
{
	if(x == N-1 && y == N-1)
	    return 1;
	else if(x == N-1)
	    return numPaths(x, y+1);
	else if(y == N-1)
	    return numPaths(x+1, y);
	else
	    return numPaths(x, y+1) + numPaths(x+1, y);
}

int main()
{
	cout<<"\nSize of Matrix = ";
	cin>>N;
	int count = 0;
	
	if(N > 1)
		count = numPaths(0, 0); // Robot started from (0,0). Have to reach (N-1, N-1)

	cout<<"Number of possible paths = "<<count<<endl;
}
