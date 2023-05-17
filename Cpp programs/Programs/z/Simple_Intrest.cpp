//To calculate the simple intrest 
#include<iostream>
using namespace std;
int main(){
    float Intrest , Principal , Rate , Time;

    cout<<"Enter the Principal Amount :";
    cin>>Principal;
    cout<<"Enter the Rate Of Intrest :";
    cin>>Rate;
    cout<<"Enter the Time Period :";
    cin>>Time;

    Intrest = (Principal * Rate * Time)/100;        //formula for calculating Simple Intrest

    cout<<"Simple Intrest ="<<Intrest;

    return 0;
}