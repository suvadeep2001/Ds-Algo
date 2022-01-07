#include <iostream>
using namespace std;

int linear_search(int arr[],int size,int key)
{
	int i;
    for ( i = 0; i < size; i++) {
        if(arr[i] == key)
        
     return (i-1);
        
    }
    return -1;
}

int main() {
	
	int arr[] = {
	  10,15,1,8,5,4,78,25  
	};
	
	int key;
	cin>>key;
	
	int size = sizeof(arr)/sizeof(arr[0]);
	int index = linear_search(arr,size,key);
	
	
	if(index != -1)
	
	cout <<key<<" is in the "<<index <<"th position" << endl;
	
    else{
    cout<<key<<" not found"<<endl;
    }
	
	return 0;
}
