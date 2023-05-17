//To print Hollow Rectangular Pattern
#include<iostream>
using namespace std;
int main(){
    int i,j,x,y;
    cout<<"Enter the number of rows :"<<endl;
    cin>>x;

    cout<<"Enter the number of coloums :"<<endl;
    cin>>y;
      
    for(i=0 ;i<x ;i++){
        for(j=0 ; j<y ; j++){
            if(i==0 || i==(x-1)  || j==0 || j==(y-1)){
                cout<<"* ";
            }else
            {
                cout<<"  ";
            }
            
        }cout<<"\n";
    }
    return 0;
}