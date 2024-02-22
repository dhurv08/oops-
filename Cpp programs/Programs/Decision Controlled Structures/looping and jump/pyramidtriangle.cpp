#include<iostream>
using namespace std;
int main(){
    int i,j,x,k;
    cout<<"Enter the number of rows :"<<endl;
    cin>>x;


    for(i=1 ; i<=x ; i++){
        for(k=x-1;k>=i;k--){
            cout<<" ";
        }
        for(j=1 ; j<=i ; j++){
            cout<<"* ";
        }cout<<"\n";
    }

    // for(i=x;i>=1;i--){
    //     for(k=i;k<=(x-1);k++){
    //         cout<<" ";
    //     }
    //     for(j=i;j>1;j--){
    //         cout<<" *";
    //     }cout<<"\n";
    // }
    return 0;
}