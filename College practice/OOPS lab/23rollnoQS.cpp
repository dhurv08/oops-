#include<iostream>
using namespace std;
struct student { 
int rollno; 
char name[10]; 
}; 
int main(){ 
student stu; 
cout<<"Enter Details as follows - \n1. Roll Number\n2. Name "<<endl;
cin>>stu.rollno>>stu.name; 

cout<<"1. Roll Number = "<<stu.rollno<<"\n2. Name = "<<stu.name<<endl;
return 0;
} 