#include <iostream>
using namespace std;

int main() {

    int first = 0;
    int second = 1;

    int n;
    cout<<"Enter the range : ";
    cin>>n;
    cout<<first<<endl;
    cout<<second<<endl;
    for(int i = 0;i<n;i++)
    {
    
     int third = first+second;
     cout<<third<<endl;
    
     first = second;
     second = third;
    }

    return 0;
}