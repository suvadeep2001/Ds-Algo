#include <iostream>
using namespace std;

void bubble_sort(int arr[],int size)
{
    for(int time =1; time<=size-1;time++){
        for(int j = 0; j<= size - 1 - time ; j++){
            if(arr[j] > arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}



int main() {
    int arr[] = {
      5,8,1,-7,2,9,0,7,6,5,0,-8  
    };
    int size = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,size);
	for(auto x:arr)
	{
	    cout<<x<<" ";
	}
	return 0;
}


/*

5 4 3 2 1 

start : -- 5 - 1 - 1

4 5 3 2 1

4 3 5 2 1 

4 3 2 5 1 

4 3 2 1 5

==

3 4 2 1
3 2 4 1
3 2 1 4

==

2 3 1
2 1 3

==

1 2 

finish : --

result : 1 2 3 4 5 : need total iteration 4 (5 - 1)

for each time we loop will work for n - 1 - time

*/