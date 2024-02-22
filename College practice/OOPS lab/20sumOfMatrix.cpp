#include <iostream> 
using namespace std;
int main()  
{ 
	int rows, cols; 
	 cout << "Enter the number of rows: "; 
	 cin >> rows; 
	 cout << "Enter the number of columns: "; 
	 cin >> cols; 
	int matrix1[rows][cols]; 
	int matrix2[rows][cols]; 
	int sum[rows][cols]; 
	 cout << "Enter elements of the first matrix:"; 
	for (int i = 0; i < rows; ++i)  
   { 
    	for (int j = 0; j < cols; ++j)   
   	{ 
        	 cin >> matrix1[i][j]; 
    	} 
	} 
	 cout << "Enter elements of the second matrix:"; 
	for (int i = 0; i < rows; ++i) { 
    	for (int j = 0; j < cols; ++j) { 
        	 cin >> matrix2[i][j]; 
    	} 
	} 
for (int i = 0; i < rows; ++i) { 
    	for (int j = 0; j < cols; ++j) { 
        	sum[i][j] = matrix1[i][j] + matrix2[i][j]; 
    	} 
	} 
	 cout << "Sum of the two matrices:" <<  endl; 
	for (int i = 0; i < rows; ++i) { 
    	for (int j = 0; j < cols; ++j) { 
        	 cout << sum[i][j] << " "; 
    	} 
    	 cout <<  endl; 
	} 
	return 0; 
}