#include<bits/stdc++.h>
using namespace std;

void createArray(int array[],int size)
{
	cout<<"Enter the values of array : "<<endl;

	for (int i = 0; i < size; i++)
	{
		cin>>array[i];
	}
}

void printArray(int array[],int size)
{
for (int i = 0; i < size; i++)
	{
		cout<<array[i]<<" "<<endl;
	}
}


int main(){

	int array[5];

	int size = sizeof(array)/sizeof(int);
	createArray(array,size);

	printArray(array,size);

	cout<<"The size of array is : "<<sizeof(array)/sizeof(int)<<endl;

	return 0;
}