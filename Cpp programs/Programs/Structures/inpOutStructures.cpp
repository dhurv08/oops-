#include<iostream>
using namespace std;
struct Student
{
  string id ;
  string name;
};
int main(){
    // struct Student s1,s2;
    struct Student s[3];
    // s1.id= 1;
    // cin>>s1.id;
    // s1.name ="Abcd";
    // s2.id = 2;
    // s2.name= "zxc";
    // cout<<"Details of student 1 = \n";
    // cout<<"Id ="<<s1.id<<endl;
    // cout<<"Name ="<<s1.name<<endl;
    // cout<<"Details of student 2 = \n";
    // cout<<"Id ="<<s2.id<<endl;
    // cout<<"Name ="<<s2.name<<endl;

    for(int i=0;i<3;i++)
    {
        cout<<"Enter details of student "<<(i+1)<<endl;
        cout<<"Enter id = ";
        cin>> s[i].id;
        cout<<"Enter name = ";
        cin>> s[i].name;
    }
        cout<<"_____Details of students____ "<<endl;


    for(int i=0;i<3;i++)
    {
        cout<<s[i].id <<"\t"<<s[i].name<<endl;
    }
    return 0;
}