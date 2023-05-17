//To input marks in 3 subjects and finding the total and percentage 
#include<iostream>
using namespace std;
int main(){
    int sub1 , sub2 , sub3 ,result;
    cout<<"Enter the numbers out of 100 only"<<endl;

    cout<<"Enter the marks obtained in subject 1 :"<<endl;
    cin>>sub1;
    cout<<"Enter the marks obtained in subject 2 :"<<endl;
    cin>>sub2;
    cout<<"Enter the marks obtained in subject 3 :"<<endl;
    cin>>sub3;
    
    result =(float)((sub1 + sub2 + sub3)*100) /300;
    cout<<"Total marks ="<<sub1 + sub2 + sub3<<"/300"<<endl ;
    cout<<"Percentage obtained ="<<result<<endl;

    if(result >= 91)
    {
        cout<<"You achived grade A*"<<endl;
    }else if(result >=81 && result <= 90)
    
    {
        cout<<"You achived grade A"<<endl;
    }else if (result >= 71 && result <=80)
    {
        cout<<"You achived grade B"<<endl;
    }else if (result >= 61 && result <=70)
    {
        cout<<"You achived grade C"<<endl;
    }else if (result >= 51 && result <=60)
    {
        cout<<"You have achived grade D";   
    }else
    {
        cout<<"You have achived grade F";
    }
    return 0;
}