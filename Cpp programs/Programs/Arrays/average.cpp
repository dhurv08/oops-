//Input a 1D array and print the average of its elements.
#include<iostream>
using namespace std;
int main(){
    int i,n,addition,average;

    cout<<"Enter the no. of array "<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the numbers in array "<<endl;
    for(i=0 ; i<n ; i++){
        cin>>array[i];
    }
    addition=0;

    cout<<"The values are ="<<endl;
    for(i=0;i<n;i++){
        cout<<array[i]<<endl;
        addition+=array[i];
    }
    average=addition/n;
    cout<<"The average is "<<average<<endl;


    return 0;
}