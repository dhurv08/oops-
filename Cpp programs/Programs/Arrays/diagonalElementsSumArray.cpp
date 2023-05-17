//Input a 2-D array and print sum of its diagonal elements
#include<iostream>
using namespace std;
int main(){
    int i,j,rows,coloumns,n;
    cout<<"Enter the numbers of rows and coloumns is matrix ="<<endl;
    cin>>rows>>coloumns;

    int matrix[rows][coloumns];
    cout<<"Enter the values for matrix ="<<endl;
    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<coloumns ; j++){
            cin>>matrix[i][j];
        }
    }

    int sum=0;
    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<coloumns ; j++){
            if(i == j){
                sum = sum + matrix[i][j];
            }
        }
    }
    cout<<"The sum of diagonal elements of the matrix is "<<sum<<endl;
    return 0;
}