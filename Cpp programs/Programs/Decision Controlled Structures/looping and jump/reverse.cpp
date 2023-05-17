//Input any 4-digit number and print its reverse
#include<iostream>
using namespace std;
int main(){
    int n,reverse,lastdigit;

    cout<<"Enter the number=";
    cin>>n;
    reverse=0;

    while(n>0){
        lastdigit=n%10;
        reverse=reverse*10+lastdigit;
        n/=10;

    }cout<<reverse<<endl;

    return 0;
    }