//Input two matrices and print their addition.
#include<iostream>
using namespace std;
int main(){
    int i,j,rows,coloumns,n;
    cout<<"Enter the numbers of rows ="<<endl;
    cin>>rows;
    cout<<"Enter the number of coloumns ="<<endl;
    cin>>coloumns;

    int matrix1[rows][coloumns],matrix2[rows][coloumns];

    cout<<"Enter the values for matrix 1"<<endl;
    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<coloumns ; j++){
            cin>>matrix1[i][j];
        }
    }

    cout<<"Enter the values for matrix 2"<<endl;
     for(i=0 ; i<rows ; i++){
        for(j=0 ; j<coloumns ; j++){
            cin>>matrix2[i][j];
        }
    }

    int addition[rows][coloumns];
    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<coloumns ; j++){
            addition[i][j]= matrix1[i][j] + matrix2[i][j];
        }
    }

    cout<<"The addition of matrix is ="<<endl;
    for(i=0 ; i<rows ; i++){
        for(j=0 ; j<coloumns ; j++){
            cout<<addition[i][j]<<"  ";
        }cout<<endl;
    }
    return 0;
}