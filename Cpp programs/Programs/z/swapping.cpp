// swapping numbers
#include<iostream>
using namespace std;
int main(){
    //Swapping using 3rd variable 
    // int a,b,c;
    // cout<<"Enter a = ";
    // cin>>a;
    // cout<<"Enter b = ";
    // cin>>b;

    // cout<<"before swapping :"<<"a = "<<a<<" ,b = "<<b;
    // c=a;
    // a=b;
    // b=c;

    // cout<<"\nafter swapping :"<<"a = "<<a<<" ,b = "<<b;
    

    //Swapping without using 3rd variablex

    int a,b;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b; 

    cout<<"before swapping :"<<"a = "<<a<<" ,b = "<<b;
    a=a+b;
    b=a-b;
    a=a-b;
   
    cout<<"\nafter swapping :"<<"a = "<<a<<" ,b = "<<b;

    return 0;
}
