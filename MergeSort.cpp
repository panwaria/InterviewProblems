/*** INSERTION SORT ***/

#include<iostream>
#include"getput.h"

using namespace std;

void Merge (int *array, int startIndex, int mid, int endIndex);

void MergeSort(int *array, int startIndex, int endIndex)
{
     //cout<<"\n\nMerge-Sorting array :";
     //printIntRangeOutput(array, startIndex, endIndex);
     
     int num = endIndex - startIndex + 1;
     int temp;
     
     if (num == 1)
        return;
     else if (num == 2)
     {
          if (array[startIndex] > array[endIndex])
          {
               temp = array[startIndex]; array[startIndex] = array[endIndex]; array[endIndex] = temp;
          }
          
          return;
     }        
     
     int mid = startIndex + num/2;

     //cout<<"\n\tMerge-Sorting its FIRST PART";
     MergeSort (array, startIndex, mid - 1);
     
     //cout<<"\n\tMerge-Sorting its SECOND PART";
     MergeSort (array, mid, endIndex);
     
     //cout<<"\n\tMerging BOTH PARTS --" << startIndex << " " << mid - 1 << " " <<  endIndex;
     Merge (array, startIndex, mid - 1, endIndex);
}

void Merge (int *array, int startIndex, int mid, int endIndex)
{
     int num = endIndex - startIndex + 1;
     
     if(num == 1)
            return;

     int *tempArr = new int [num];

     int i = startIndex; 
     int j = mid + 1;
     int index = 0;
     while (i <= mid && j <= endIndex)
     {
           if(array[i] <= array[j])
               tempArr[index++] = array[i++];
           else
               tempArr[index++] = array[j++];
     } 
     
     while (i <= mid)
          tempArr[index++] = array[i++];
     
     while (j <= endIndex)
          tempArr[index++] = array[j++];
          
     for (i = 0; i < index; i++)
         array[startIndex + i] = tempArr[i];
     
     delete[] tempArr;
}

int main()
{
    int num;
    
    cout << "Enter the number of elements: ";
    cin >> num;
    int *array = new int[num];
    getIntInput(array, num);
        
    MergeSort(array, 0, num-1);
 
    cout << "\nThe sorted array is: ";
    printIntOutput(array, num);
    
    delete[] array;
}
