#include<bits/stdc++.h>
using namespace std;

int linearsearch(int array[],int size,int element)
{
    int pos;
    for (pos = 0; pos < size; pos++)
    {
        if (element == array[pos])
        {
            return pos+1;
        }
    }
    return -1;
    
}

int main()
{
    int array[5] = {
        14,15,16,11,10
    };
    
    cout<<linearsearch(array,5,11)<<endl;


    return 0;
}