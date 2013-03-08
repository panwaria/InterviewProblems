#include<iostream>

using namespace std;

void getIntInput(int *array, int num)
{
     for (int i = 0; i < num; i++)
     {   
         cout << "\nEnter element["<<i<<"]: ";
         cin >> array[i];
     }
}

void printIntOutput (int *array, int num)
{
     for (int i = 0; i < num; i++)
     {
         cout << array[i] << " ";
     }
}

void printIntRangeOutput (int *array, int startIndex, int endIndex)
{
     for (int i = startIndex; i <= endIndex; i++)
     {
         cout << array[i] << " ";
     }
}
                        
