#include<iostream>

using namespace std;

int main()
{
    int N;
    cout <<"Enter the degree of the Matrix: ";
    cin >> N;
    
    cout << "\nInitializing Matrix "<<N<<"x"<<N<<"...";
    int **matrix = new int* [N];
    for (int i = 0; i < N; i++)
    {
        matrix[i] = new int [N];
    }
    
    // Putting '1' on the diagonals.
    for (int i = 0 ; i < N; i++)
        for (int j = 0; j < N; j++)
        {
            if (i == j)
               matrix[i][j] = 1;          
            else
               matrix[i][j] = 0;
        }
    
    cout << "\nThe Matrix is:\n";
    for (int i = 0 ; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "\nRotating Matrix : \n";
    for (int i = 0; i < N/2 ; i++)
    {
        int start = i;
        int end = N - 1 - i;
        for (int j = start; j < end; j++)
        {
            int temp = matrix[start][j];
            
            matrix[start][j] = matrix[end - j + start][start];
            
            matrix[end - j + start][start] = matrix[end][end - j + start];
            
            matrix[end][end - j + start] = matrix[j][end];
            
            matrix[j][end] = temp;
        }
    }
    
    for (int i = 0 ; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}
