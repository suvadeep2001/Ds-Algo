#include<bits/stdc++.h>
using namespace std;


void swapAnArray(int array[],int size)
{
    int i = 0;

    while (i < size)
        {
        array[i] = array[i] + array[i+1];
        array[i+1] = array[i] - array[i+1];
        array[i] = array[i] - array[i+1];

        i+=2;
        
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
    int array[6] = {
    14,15,16,17,18,19
    };
    
    int size = sizeof(array)/sizeof(int);

    swapAnArray(array,size);
    
    printArray(array,size);

    return 0;
}