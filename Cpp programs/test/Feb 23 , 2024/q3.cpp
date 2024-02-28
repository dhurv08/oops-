#include<iostream>
using namespace std;
int main(){
    int x , i , j;
    cout<<"Enter the number of rows = ";
    cin>>x;

    //To print letter S
     for(i=1;i<=x;i++){
        for(j=1;j<=x;j++){
            if(i==1 || i==3 || i==5 || i==2 && j==1 || i==4 && j==5 ) 
            cout<<"* ";
            else{
                cout<<"  ";
            }
        }cout<<"\n";
    }
    return 0;
}