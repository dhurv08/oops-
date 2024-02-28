//WAP to print Fibonacci series using recursion (input number of terms in series from the user) .
#include <iostream>
using namespace std;
int fibo(int x ){
    if(x == 1 || x ==0 ){
        return x;
    }else{
        return (fibo(x-1)+fibo(x-2));
    }
}
int main(){
    int x ; 
    int i = 0 ; 

    cout<<"Enter the number = ";
    cin>>x;

    while(i < x) {
        cout << " " << fibo(i);
        i++;
        }
        
   return 0;
}