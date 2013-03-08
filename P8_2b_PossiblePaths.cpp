#include <iostream>
#include <vector>

using namespace std;

int N = 0; // NxN matrix


class Point
{
public:
	int x, y;
	Point(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
};

int numPaths(int x, int y, vector<Point *> v)
{
	if(x == N-1 && y == N-1)
	{
		for( vector<Point*>::iterator it = v.begin(); it != v.end(); it++)
		{
			cout<<"("<<(*it)->x<<", "<<(*it)->y<<") -> ";
		}
		cout<<endl;
		return 1;
	}
	else if(x == N-1)
	{
		v.push_back(new Point(x, y+1));
		return numPaths(x, y+1, v);
	}
	else if(y == N-1)
	{
		v.push_back(new Point(x+1, y));
	    return numPaths(x+1, y, v);
	}
	else
	{
		vector<Point*> v1 = v; v1.push_back(new Point(x, y+1));
		vector<Point*> v2 = v; v2.push_back(new Point(x+1, y));
		
	    return numPaths(x, y+1, v1) + numPaths(x+1, y, v2);
	}
}

int main()
{
	cout<<"\nSize of Matrix = ";
	cin>>N;
	int count = 0;
	vector<Point *> v;
	v.push_back(new Point(0,0));

	if(N > 1)
		count = numPaths(0, 0, v); // Robot started from (0,0). Have to reach (N-1, N-1)

	cout<<"Number of possible paths = "<<count<<endl;
}
