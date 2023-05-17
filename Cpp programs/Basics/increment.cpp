//Using inrement operator
#include<iostream>
using namespace std;
int main(){
    // a++;          //post increment
    // ++a;          //pre increment
    
    int a,b;
    cout<<"value of a : ";
    cin>>a;

    b=a++;          // this is post increment in which value of b will remain the same
    //b=++a;          // this is pre increment in which value of b will change


   //cout<<"value of a:"<<a;       
   cout<<" the value of b:"<<b;
   

    

    return 0;

}