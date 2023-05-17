//Shorthand operators
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a :"<<endl;
    cin>>a;
    cout<<"Enter value of b :"<<endl;
    cin>>b;

    a+=b;
    cout<<a<<endl;

    a-=b;
    cout<<a<<endl;

    a*=b;
    cout<<a<<endl;

    // a/=b;
    // cout<<a<<endl;

    a%=b;
    cout<<a<<endl;

    a&=b;
    cout<<a<<endl;

    a|=b;
    cout<<a<<endl;

    a^=b;
    cout<<a<<endl;

    a-=b;
    cout<<a<<endl;

    a<<=b;
    cout<<a<<endl;

    a>>=b;
    cout<<a<<endl;
   
    return 0;
}