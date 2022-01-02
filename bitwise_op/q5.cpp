#include<iostream>
using namespace std;

int main()
{
    int a = 1;
    int b = a++;// b = 1 , a = 2
    int c = ++a;// c = 3
    cout<<b; // b = 1
    cout<<c; // c = 3
    return 0;
}