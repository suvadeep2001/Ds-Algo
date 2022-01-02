#include<bits/stdc++.h>
using namespace std;

// function for getting the maximum element of an array

int maximum(int array[],int size)
{
    int max = array[0];
    int i = 1;
    while ( array[i] > max )
    {
        max = array[i];
        i++;
    }  
      return max;

}

// function for getting the minimum element of an array


int minimum(int array[],int size)
{
    int min = array[0];
    int i = 1;
    while ( array[i] < min )
    {
        min = array[i];
        i++;
    }  
      return min;

}


int main()
{
    int array[5] = {
        14,10,4,5,8
    };

    int size = sizeof(array)/sizeof(int);

    cout<<"The maximum element of an array is : "<<maximum(array,size)<<" "<<endl;

    cout<<"The minimum element of an array is : "<<minimum(array,size)<<" "<<endl;

    return 0;
}
