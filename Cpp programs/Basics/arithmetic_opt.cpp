// Using arithmetic operators
#include<iostream>
using namespace std;
int main(){
int a,b,addition,subtraction,multiplication,modulas;
float division;

cout<<"Value of a :"<<endl;
cin>>a;

cout<<"Value of b :"<<endl;
cin>>b;

// cout<<"\nAddition :"<<a+b;
// cout<<"\nSubtraction :"<<a-b;
// cout<<"\nMultiplication :"<<a*b;
// cout<<"\nDivision :"<<(float)a/b;
// cout<<"\nModulas :"<<a%b;




addition= a+b;
//  cout<<"\nAddition is "<<addition;

subtraction = a-b;
//  cout<<"\nSubtracction is "<<subtraction;

multiplication = a*b;
//  cout<<"\nMultiplicaation is "<<multiplication;
      
division =(float)a/b;
// cout<<"\nDivision is "<<division;

modulas = a % b;
// cout<<"\nModulas is "<<modulas;


  



/*To print the variables along s ,
we use operators like this.*/

// cout<<"\nAddition of numbers is :"<<a<<"+"<<b<<"="<<addition;
// cout<<"\nSubtraction of numbers is :"<<a<<"-"<<b<<"="<<subtraction;
// cout<<"\nMultiplication of numbers is :"<<a<<"*"<<b<<"="<<multiplication;
// cout<<"\nDivision of numbers is :"<<a<<"/"<<b<<"="<<division;
// cout<<"\nModulas of numbers is :"<<a<<"%"<<b<<"="<<modulas;

return 0;
}