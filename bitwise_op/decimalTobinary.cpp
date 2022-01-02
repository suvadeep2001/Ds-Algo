#include<bits/stdc++.h>
using namespace std;

int 
main(){

	int n;
	cin>>n;
	int i = 0;

	int result = 0;

	while(n > 0)
	{
		int bit = n % 2;

		result = (bit * pow(10,i)) + result;

		n = n/2;
		i++;
	}
	
	cout<<result<<endl;

	return 0;
}