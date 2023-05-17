//Input time in seconds and display it in form of h:m:s
#include<iostream>
using namespace std;
int main(){
    int hours, minutes , second ;
    cout<<"Enter the time in seconds :"<<endl;
    cin>>second;

    hours = second / 3600;
    second = second % 3600;
    minutes=second /60;
    second %= 60;

    cout<<"Time in format h:m:s is "<<hours<<":"<<minutes<<":"<<second;

    return 0;
}
