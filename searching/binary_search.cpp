#include <iostream>
using namespace std;

int binary_search(int arr[],int size,int key)
{
    int start = 0;
    int finish = size - 1;
    
   while(start <= finish)
   {
       int mid = (start + finish)/2;
      
       if(arr[mid] == key){
           return mid-1;
       }
      else if(arr[mid] > key)
       {
           finish = mid - 1;
       }
       else if(arr[mid] < key)
       {
           start = mid + 1;
       }
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
	
	int index = binary_search(arr,size,key);
	
	
	if(index != -1)
	
	cout <<key<<" is in the "<<index <<"th position" << endl;
	
    else{
    cout<<key<<" not found"<<endl;
    }
	
	return 0;
}
