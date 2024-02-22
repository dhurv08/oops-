//initialize an array and display the even numbers: 
#include <iostream> 
using namespace std;
int main()  
{ 
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
	int size = sizeof(arr) / sizeof(arr[0]); 
	 cout << "Even values in the array are: "; 
    
	for (int i = 0; i < size; i++)  
	{ 
    	if (arr[i] % 2 == 0)  
    	{ 
        	 cout << arr[i] << " "; 
    	} 
	} 
	 cout <<  endl; 
	return 0; 
} 
