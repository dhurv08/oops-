//Swap two numbers using pass-by value
#include<iostream>
using namespace std;
void swap(int *  , int *);
void sum(int , int);
void sum(int,int, int);
int main(){
    int a,b;
    cout<<"Enter the value of a = ";
    cin>>a;
    cout<<"Enter the value of b = ";
    cin>>b;
   sum(a,b);
   sum(a,b,10);
    // cout<<"\n Before swap values are a = "<<a<<", b = "<<b;
    // swap(&a,&b);
    // cout<<"\n After swap values are a = "<<a<<", b = "<<b;

    return 0;
}
void swap(int * a, int * b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
    cout<<"\n Swapped value are a = "<<*a<<", b = "<<*b;
}

void sum(int x, int y){
    cout<<"Sum= "<<(x+y);
}

void sum(int x, int y,int z){
    cout<<"Sum= "<<(x+y+z);
}

