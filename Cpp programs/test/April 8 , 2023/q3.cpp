// Input any number from the user and find its factorial
#include<iostream>
using namespace std;
int main(){
    int i,x,fictorial;

    cout<<"Enter the number ="<<endl;
    cin>>x;

    fictorial=1;

    for(i=x; i>=1 ;i--){
        fictorial = fictorial * i;
    }
    cout<<fictorial<<endl;

    return 0;
}