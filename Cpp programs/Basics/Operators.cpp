/*There are five operators in C++
Arthimatic , Relational , Logical , Bitwise , Assignment*/
#include<iostream>
using namespace std;
int main(){
    

    /*ASSIGNMENT 
    OPERATOR*/

    // int a,b;
    // cout<<"Enter a :";
    // cin>>a;
    // cout<<"Enter b :";
    // cin>>b;
    // a+=7;
    // cout<<a<<endl;
    // b-=9;
    // cout<<b<<endl;





    /*ARTHIMATIC 
    OPERATORS*/


    // int a,b,addition,subtraction,multiplication,modulas,division;

    // cout<<"Value of a :";
    // cin>>a;

    // cout<<"Value of b :";
    // cin>>b;

    // cout<<"\nAddition :"<<a+b;
    // cout<<"\nSubtraction :"<<a-b;
    // cout<<"\nMultiplication :"<<a*b;
    // cout<<"\nDivision :"<<(float)a/b;
    // cout<<"\nModulas :"<<a%b;




    // addition= a+b;
    // cout<<"\nAddition is "<<addition;

    // subtraction = a-b;
    // cout<<"\nSubtracction is "<<subtraction;

    // multiplication = a*b;
    // cout<<"\nMultiplicaation is "<<multiplication;
      
    // division =float(a)/b;
    // cout<<"\nDivision is "<<division;

    // modulas = a % b;
    // cout<<"\nModulas is "<<modulas;


    // /*To print the variables along,
    // we use operators like this.*/

    // cout<<"\nAddition of numbers is :"<<a<<"+"<<b<<"="<<addition;
    // cout<<"\nSubtraction of numbers is :"<<a<<"-"<<b<<"="<<subtraction;
    // cout<<"\nMultiplication of numbers is :"<<a<<"*"<<b<<"="<<multiplication;
    // cout<<"\nDivision of numbers is :"<<a<<"/"<<b<<"="<<division;
    // cout<<"\nModulas of numbers is :"<<a<<"%"<<b<<"="<<modulas;







    /*RELATIONAL 
    OPERATOR*/

    // int a,b;
    // cout<<"Enter a :";
    // cin>>a;
    // cout<<"Enter b :";
    // cin>>b;

    // cout<<(a>b)<<endl;
    // cout<<(a<b)<<endl;
    // cout<<(a<=b)<<endl;
    // cout<<(a>=b)<<endl;
    // cout<<(a==b)<<endl;
    // cout<<(a!=b)<<endl;


    /*LOGICAL
    OPERATORS*/
    
//     bool a=true;
//     bool b=false;


//    //AND (&) function -
//    cout<<(a&a)<<endl;
//    cout<<(a&b)<<endl;
//    cout<<(b&a)<<endl;
//    cout<<(b&b)<<endl;

//    //OR (|) function -
//    cout<<(a|a)<<endl;
//    cout<<(a|b)<<endl;
//    cout<<(b|a)<<endl;
//    cout<<(b|b)<<endl;

//    //NOT (!) operator -
//    cout<<(!a)<<endl;
//    cout<<(!b)<<endl;



    

    /*BITWISE 
    OPERATOR*/

    int a,b;
    cout<<"Enter a :";
    cin>>a;
    cout<<"Enter b :";
    cin>>b;

    cout<<(a&b)<<endl;
    cout<<(a|b)<<endl;
    cout<<(a^b)<<endl;
    cout<<(~a)<<endl;
    cout<<(a<<b)<<endl;
    cout<<(a>>b)<<endl;

    return 0;
}