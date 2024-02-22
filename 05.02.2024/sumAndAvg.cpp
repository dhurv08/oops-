#include<iostream>
using namespace std;
int main(){
    int a[20];
    int n, sum,avg;

    cout<<"Enter the limit of nummbers = ";
    cin>>n;
    cout<<"Enter "<<n<<" Numbers "<<endl;

    for(int i = 1; i<=n ; i++){
        cin>>a[i];
    }
    //sum and avg  
    for(int i = 1; i<=n ; i++){
        sum += a[i];
    }
    cout<<"Sum of all numbers = "<<sum<<endl;
    cout<<"Average of all numbers = "<<(sum/n)<<endl;

    return 0;

}