#include<iostream>
using namespace std;
int main(){

 cout<<"Before if statement";
 int a=10,b=5;
 if(a!=10){
    cout<<"\na is not 10";
 }
 else{
    cout<<"\n a is 10";
 }
 cout<<"\nout of if";


 // to check equal values
 if(a==b)
 {
    cout<<"Equal";
 }
 else{
   if(a>b){
     cout<<"a is greater";
   }else{
    cout<<"b is greater";
   }

 }

}