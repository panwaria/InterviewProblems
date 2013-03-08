/*** INSERTION SORT ***/

#include<iostream>
#include"getput.h"

using namespace std;

void InsertionSort(int *array, int num)
{
    int key, i;
    for (int j = 1; j < num; j++)
    {
        key = array[j];
        i = j-1;
        
        while (array[i] > key && i >= 0)
        {
              array[i+1] = array[i];
              i = i-1;
        }
        
        array[i+1] = key;
    }
}

int main()
{
    int num;
    
    cout << "Enter the number of elements: ";
    cin >> num;
    int *array = new int(num);
    getIntInput(array, num);
    
    InsertionSort(array, num);
    
    cout << "\nThe sorted array is: ";
    printIntOutput(array, num);
    
    delete[] array;
}

