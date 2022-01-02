#include <iostream>
using namespace std;

int main() {
    // for (int i = 0; i <=5; i++)
    // {
    //    cout<<i<<" ";
    //    i++;
    // }
    
    // output : 0 2 4 

    // for (int i = 0; i <=5; i--)
    // {
    //    cout<<i<<" ";
    //    i++;
    // } output : infinite time 0 print


    for (int i = 0; i <=15; i+=2)
    {
       cout<<i<<" "<<endl;
       if (i&1)
       {
           continue;
       }
       
       i++;
    }


    return 0;
}