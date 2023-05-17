//1. Find the greatest of three numbers from the user input
#include<iostream>
using namespace std;
int main(){
    int a,b,c,greatest;

    cout<<"Enter the value of a ="<<endl;
    cin>>a;

    cout<<"Enter the value of b ="<<endl;
    cin>>b;

    cout<<"Enter the value of c ="<<endl;
    cin>>c;
     
    greatest=(a>=b && a>=c)?a:(b>=a && b>=c)?b:c;

    cout<<greatest<<"is the greatest.";

    return 0;
}