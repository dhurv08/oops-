#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter no. 1 = ";
    cin>>a;
    cout<<"Enter no. 2 = ";
    cin>>b;
    cout<<"Enter no. 3 = ";
    cin>>c;

    if(a<b && a<c){
        cout<<"a is smallest , and the value is "<<a<<endl;
    }else if(b<a && b<c){
        cout<<"b is smallest , and the value is "<<b<<endl;
    } else {
        cout<<"c is smallest , and the value is "<<c<<endl;   
    }
}