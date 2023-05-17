//Input any 4-digit number and print the sum of its all digits
#include<iostream>
using namespace std;
int main(){
    int i,n,sum,lastdigit;
    cout<<"Enter the number =";
    cin>>n;

    sum=0;

    while(n>0){
        lastdigit=n%10;
        n/=10;
        sum=lastdigit+sum;
       
    }cout<<sum<<endl;

    return 0;
}