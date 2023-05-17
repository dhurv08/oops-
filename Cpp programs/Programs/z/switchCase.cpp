#include<iostream>
using namespace std;
int main(){
    int a,b;
    int choice;

    cout<<"Enter a ="<<endl;
    cin>>a;
    cout<<"Enter b ="<<endl;
    cin>>b;

    cout<<"Choose the options :"<<endl;
    cout<<"1 : Addition \n2 : Subtraction\n3 : Multiplication\n4 : Division\n5 : Modulas \n ";
    cin>>choice;

    switch (choice){
        case 1: 
        cout<<"Addition ="<<a+b<<endl;
        break;

        case 2:
        cout<<"Subtraction ="<<a-b<<endl;
        break;

        case 3:
        cout<<"Multiplication ="<<a*b<<endl;
        break;

        case 4:
        cout<<"Division ="<<a/b<<endl;

        case 5:
        cout<<"Modulas ="<<a%b<<endl;
        break;

        default:
        cout<<"Invalid Input";
    }
    return 0;
}