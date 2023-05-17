//Implement any five functions from math.h file.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number to perform operation ="<<endl;
    cin>>n;

    cout<<"square root = "<<sqrt(n)<<endl;
    cout<<"cube root = "<<cbrt(n)<<endl;
    cout<<"log = "<<log(n)<<endl;
    cout<<"sin = "<<sin(n)<<endl;
    cout<<"hyperbolic tangent = "<<tanh(n)<<endl;

    return 0;
}