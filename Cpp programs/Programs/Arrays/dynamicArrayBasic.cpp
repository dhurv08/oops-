#include<iostream>
using namespace std;
int main(){
    int i;
    int marks[5];
    cout<<"Enter five values"<<endl;

    for(i=0 ; i<5 ; i++){
        cin>>marks[i];
    }
    cout<<"Five values are ="<<endl;
    for(i=0 ; i<5 ;i++){
        cout<<marks[i]<<endl;
    }

    return 0;
}