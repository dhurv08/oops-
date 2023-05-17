#include<iostream>
using namespace std;
int main(){
    
    int * p;
    int a[5]={1,2,3,4,5};
    p=a;
    // for(int i=0;i<5;i++)
    // {
    //     cout<< (p+i)<<endl;
    // } 
    cout << "p:" << p << endl;

cout << "\nOperations:\n";
    p++;
    cout << "p++:" << p << endl;
    p--;
    cout << "p--:" << p << endl;
    p = p + 2;
    cout << "p = p + 2:" << p << endl;
    p = p - 2;
    cout << "p = p - 2:" << p << endl;
    // int d = q - p;
    // d = d / 2;
    // cout << "d = q - p:" << d << endl;

    return 0;
}