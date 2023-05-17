//To convert celsius to Fahrenheit and vice versa
#include<iostream>
using namespace std;
int main(){
    float temp;
    char unit;
    

    cout<<"Enter the unit you would like to convert to (F/C) :";
    cin>>unit;

    if (unit == 'F')
    {
        cout<<"Enter the temperature in Celsius :";
        cin>>temp;

        temp = (9/5 * temp ) + 32;
        cout<<"Temperature in Fahrenheit is"<<temp;

    }else 
    {if (unit == 'C')
    {  cout<<"Enter the temperature in Fahrenheit :";
        cin>>temp; 

        temp = ((temp - 32) *5 )/9;

        cout<<"Temperature in Celsius is"<<temp;
        } 
        else
        {
            cout<<"Error : Invalid Input";
        }
    }
    return 0;
    
}