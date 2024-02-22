#include<iostream>
using namespace std;
int main(){
    int a,factorial=1;
    cout<<"Enter the number to fund factorial of = ";
    cin>>a;

    for(int i = 1 ; i<=a ; i++){
        factorial = factorial*i;
    }
    cout<<"Factorial of number is = "<<factorial<<endl;
    return 0; 
}