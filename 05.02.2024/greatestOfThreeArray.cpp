/*Write a C++ program to find the largest three elements in an array
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[100];
    int n = 3 , sum = 0 ;
    
    cout<<"Enter 3 numbers = ";
    for(int i = 0 ; i<3 ; i++){
        cin>>a[i];
    }

    //greatest of 3 
    sort(a, a + n, greater<int>());
    for(int i = 0; i < min(n, 3); i++){
        cout << a[i] << " ";
    }
    cout<<endl;
    
    // //SUM
    // for(int i = 0 ; i <n ; i++){
    //     sum += a[i];
    // }
    // cout<<"Sum of the numbers = "<<sum<<endl;

    // int avg = (sum/n);
    // cout<<"Average of the numbers = "<<avg<<endl;

    return 0;
}