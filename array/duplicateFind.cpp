#include<bits/stdc++.h>
using namespace std;

int duplicateElement(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
     int count = 0;

     for (int j = 0; j < size; j++)
     {
         if (arr[i] == arr[j])
         {
             count++;
         }
         
     }
     if (count == 2)
     {
         return arr[i];
     }
        
    }
    return -1;

    
}

int main()
{

    int arr[5] = {
        14,10,15,10,18
    };
    int size = 5;
    
    cout<< duplicateElement(arr,size);


    return 0;
}