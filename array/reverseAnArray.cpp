#include<bits/stdc++.h>
using namespace std;

void reverseAnArray(int array[],int size,int start,int end)
{
    start = 0;
    end = size - 1;
    
    while (start <= end)
    {
        swap(array[start],array[end]);
        start++;
        end--;
    }
    
}

void printArray(int array[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<array[i]<<" "<<endl;
    }
    
}

int main()
{
    int array[5] = {
        14,15,10,12,5
    };
reverseAnArray(array,5,0,4);

printArray(array,5);

    return 0;
}