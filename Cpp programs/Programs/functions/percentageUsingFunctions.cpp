//Create a user-defined function to calculate percentages.
#include<iostream>
using namespace std;
void percentage();
int main(){
    percentage();
    return 0;
}
void percentage(){
    int sub1,sub2,sub3,total;
    float percentage;

    cout<<"Enter marks in subject 1 = ";
    cin>>sub1;
    cout<<"Enter marks in subject 2 = ";

    cin>>sub2;
    cout<<"Enter marks in subject 3 = ";
    cin>>sub3;

    total = sub1 + sub2 + sub3;
    cout<<"Total marks = "<<total<<" /300"<<endl;
    percentage =(total*100)/300;
    cout<<"Percentage ="<<percentage;
}