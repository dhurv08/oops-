//To print Reverse Triangular Pattern
#include<iostream>
using namespace std;
int main(){
    int i,j,x;
    cout<<"Enter the number of rows :"<<endl;
    cin>>x;

    for(i=x;i>=1;i--){
        for(j=i;j>=1;j--){
            cout<<"* ";
        }cout<<"\n";
    }
    return 0;
}
