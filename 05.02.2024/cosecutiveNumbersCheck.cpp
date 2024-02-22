#include<iostream>
using namespace std;
int main(){
    int n,b,c;
    cout<<"Enter no. 1 = ";
    cin>>n;
    cout<<"Enter no. 2 = ";
    cin>>b;
    cout<<"Enter no. 3 = ";
    cin>>c;

    if ((b == n + 1 || b == n - 1) && (c == n + 2 || c == n - 2)){
        cout<<"These 3 numbers are consecutive and final series = "<<n<<","<<b<<","<<c<<endl;
    }else{
        cout<<"These 3 numbers are not consecutive"<<endl;
    }

    return 0;

}