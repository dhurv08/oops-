// Input a 1D array and print its reverse.
#include<iostream>
using namespace std;
int main(){
    int i,n,reverse,lastdigit;

    cout<<"Enter the size of the array ="<<endl;
    cin>>n;

    int array[n];
    cout<<"Enter the values of array ="<<endl;
    for(i=0 ; i<n ; i++){
        cin>>array[i];
    }

    cout<<"The values of array = "<<endl;
    for(i=0 ;i<n ;i++){
        cout<<array[i]<<endl;
    }
    
    cout<<"Reverse is ="<<endl;
    for(i=n-1 ; i>=0 ; i--){
        cout<<array[i]<<endl;
    }
    return 0;   
}