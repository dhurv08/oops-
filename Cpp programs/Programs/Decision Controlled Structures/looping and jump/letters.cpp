#include<iostream>
using namespace std;
int main(){
    int i,j,x;
    cout<<"Enter the no. of rows =";
    cin>>x;
    
    //To print letter H
    // for(i=0 ; i<x ;i++){
    //     for(j=0 ;j<x ; j++){
    //         if(j==0 || j==(x-1) || i==(x/2))
    //         cout<<"* ";
    //         else{
    //             cout<<"  ";
    //         }
    //     }cout<<"\n";
    // }

    //To print letter T
    // for(i=0;i<x;i++){
    //     for(j=0;j<x;j++){
    //         if(i==0 || j==(x/2))
    //         cout<<"* ";
    //         else{
    //             cout<<"  ";
    //         }
    //     }cout<<"\n";
    // }

    //To print letter I
    //  for(i=1;i<=x;i++){
    //     for(j=1;j<=x;j++){
    //         if(j==3)
    //         cout<<"* ";
    //         else{
    //             cout<<"  ";
    //         }
    //     }cout<<"\n";
    // }

    //To print letter S
    //  for(i=1;i<=x;i++){
    //     for(j=1;j<=x;j++){
    //         if(i==1 || i==3 || i==5 || i==2 && j==1 || i==4 && j==5 ) 
    //         cout<<"* ";
    //         else{
    //             cout<<"  ";
    //         }
    //     }cout<<"\n";
    // }

    //To print letter R
    for(i=0 ; i<x ;i++){
        for(j=0 ;j<x ; j++){
            if(i==0 || j==0 ||i==(x/2) || i<(x/2) && j==(x-1) || i==(x-1) && j==(x-1)|| i>(x/2)&& j>(x/2) )
            cout<<"* ";
            else{
                cout<<"  ";
            }
        }cout<<"\n";
    }

    return 0;  
}