//use void pointer and print them 
#include<iostream>
using namespace std;
int main(){
    int a;
    // float b;
    cout<<"Enter value of a = "<<endl;
    cin>>a;
    // cout<<"Enter the value of b = "<<endl;
    // cin>>b;

    void *pointer;
    pointer = &a; 
    // pointer = &b;
    
    cout<<"Address of a = "<<(int*)pointer<<endl;
    cout<<"Value of a = "<<*((int*)pointer)<<endl;

   // cout<<"Address of b = "<<(float*)pointer<<endl;
   // cout<<"Value of b = "<<*((float*)pointer)<<endl;
   

    return 0;
}