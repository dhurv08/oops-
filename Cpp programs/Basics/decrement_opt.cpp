//Using decriment operator
#include<iostream>
using namespace std;
int main(){
    // a--;          //post decrement
    // --a;          //pre decrement
    
    int a,b;
   cout<<"print value of a : ";
   cin>>a;

     b=a--;          // this is post decrement in which value of b will remain the same
    // b=--a;          // this is pre decrement in which value of b will change

   cout<<" the value of b:"<<b;
   

    return 0;
}