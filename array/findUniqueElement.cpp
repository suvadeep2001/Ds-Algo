#include<bits/stdc++.h>
using namespace std;

int findUnique(int *arr, int size)
{
        // int t;
        // cin>>t;
        int n;
        cin>>n;
        // int count = 0;
        for(int i = 0 ; i < n; i++)
        {
            cin>>arr[i];
        }
       
       for (int i = 0; i < n; i++)
       {
         int count =0;
           for(int j = 0;j<n;j++)
           {
               if (arr[i] == arr[j])
               {
                   count++;
               }
           }
           if (count == 1)
           {
               return arr[i];
           }
       }
    return -1;
    }

int main()
{

    int arr[5] ;
    int size = 5;
    sort(arr,arr+size);
    cout<<findUnique(arr,size);
    
    return 0;
}
