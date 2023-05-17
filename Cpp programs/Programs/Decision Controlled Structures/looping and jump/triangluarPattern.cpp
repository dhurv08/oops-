//To print Triangular Pattern
#include<iostream>
using namespace std;
int main(){
    int i,j,x;
    cout<<"Enter the number of rows :"<<endl;
    cin>>x;


    for(i=1 ; i<=x ; i++){
        for(j=1 ; j<=i ; j++){
            cout<<"* ";
        }cout<<"\n";
    }
    return 0;
}