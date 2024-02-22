#include<iostream>
using namespace std;
int factorial(int n);
int main(){
    int fact,n;
    cout<<"Enter the number = ";
    cin>>n;
    fact = factorial(n);
    cout<<"factorial is = "<<fact<<endl;
    return 0;

}
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else
    {
        return n*factorial(n-1);
    }
}