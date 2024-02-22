#include<iostream>
using namespace std;
struct date{
    int day;
    int month;
    int year;
};
struct student{
    int roll_no;
    string name;
    date dob;
};
int main(){
    student s1;
    cout<<"Enter the details as Follows -\n 1.Roll Number\t2.Name\t3.Birth date\t4.Birth Month\t5.Birth Year"<<endl;
    cin>>s1.roll_no>>s1.name>>s1.dob.day>>s1.dob.month>>s1.dob.year;
    
    cout<<"\nDetails of student 1 = "<<endl;
    cout<<"Roll Number = "<<s1.roll_no<<"\nName = "<<s1.name<<"\nD.O.B in dd/mm/yy = "<<s1.dob.day<<"/"<<s1.dob.month<<"/"<<s1.dob.year;
    return 0;
}