#include<iostream>
using namespace std;
int sum(int, int);
void diff(int , int);
void swap(int , int);
int main(){
    int a=10,b=20,c=23; 
    // int c= 
    // cout<<"Sum = "<<sum();    //  actual params
    // diff(40,30); 


    cout<<"\n before swap values are a= "<<a<<"b= "<<b;
    swap(a,b);
    cout<<"\n after swap values are a= "<<a<<"b= "<<b;

    return 0;
}
int sum(){
    int a=10, b=20;
    int sum = a+b;
    return sum;
}
void diff(int a, int b){// formal params
    // int a=10, b=20;
    int diff = a-b;
    cout<<"\ndiff = "<<diff;
}

void swap(int a, int b){// formal params
    // int a=10, b=20;
    int c= a;
    a=b;
    b=c;
    cout<<"\n swapped values are a= "<<a<<"b= "<<b;

}