//Input an array and element to search and then print the position of element if found.
#include<iostream>
using namespace std;
int main(){
    int i,n,x,position;
    bool isfound = false;

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

    cout<<"Enter the number to check in array=";
    cin>>x;

    for(i=0;i<n;i++){
       if(x == array[i]){
        isfound = true;
        position = i;
        break;
        }
    }
    
    if(isfound = true){
        cout<<position;
    }else{
        cout<<"Number is not in array";
    } 
    return 0;
}