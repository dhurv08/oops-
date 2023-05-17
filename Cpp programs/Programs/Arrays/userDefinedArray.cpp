//Input a 1D array and print the average of its elements.
#include<iostream>
using namespace std;
int main(){
    int i,n;
    
    cout<<"Enter the size of array ="<<endl;
    cin>>n;
    int array[n];

    cout<<"Enter the values for array ="<<endl;
    for(i=0;i<n;i++){
        cin>>array[i];
    }

    cout<<"The values of array are ="<<endl;
    for(i=0;i<n;i++){
        cout<<array[i]<<endl;

    }
    return 0;
}