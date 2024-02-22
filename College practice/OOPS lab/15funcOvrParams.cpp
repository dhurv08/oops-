#include<iostream>
using namespace std;
void add(int a , int b){
    cout<<"Addition for 2 params = "<<a+b<<endl;
}

void add(int a , int b , int c){
    cout<<"Addition for 3 params = "<<a+b+c<<endl;
}

void add(int a , int b , int c , int d){
    cout<<"Addition for 4 params = "<<a+b+c+d<<endl;
}
int main(){
    int a,b,c,d;
    cout<<"Enter a = ";
    cin>>a;
    cout<<"Enter b = ";
    cin>>b;
    cout<<"Enter c = ";
    cin>>c;
    cout<<"Enter d = ";
    cin>>d;

    add(a,b);
    add(a,b,c);
    add(a,b,c,d);
    return 0;
}