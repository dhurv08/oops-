#include<iostream>
using namespace std;
float arrayaverage(int[] , int);
int main(){
    int n,i;
    float average;
    
    cout<<"Enter the no. of array "<<endl;
    cin>>n;

    int array[n];
    cout<<"Enter the numbers in the array "<<endl;
    for(i=0 ; i<n ; i++){
        cin>>array[i];
    }
    average = arrayaverage(array,n);
    cout<<"Average is = "<<average<<endl;

    return 0;
}
float arrayaverage(int a[] , int n){
    int i,addition;

    addition=0;

    for(i=0;i<n;i++){
    //    cout<<a[i]<<endl;
        addition+=a[i];
    }
    float average=addition/n;
    return average;
}