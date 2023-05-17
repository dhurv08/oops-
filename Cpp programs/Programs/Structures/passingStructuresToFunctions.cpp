//passing structures to functions 
#include<iostream>
using namespace std;
struct student{
    string id;
    string name;
};
void printstudent(struct student s){
    cout<<"ID : "<<s.id<<endl;
    cout<<"Name : "<<s.name<<endl;
}
int main(){
    struct student s;
    cout<<"Enter ID of Student = "<<endl;
    cin>>s.id;
    cout<<"Enter Name of Student = "<<endl;
    cin>>s.name;

    cout<<"__Details Of Students__"<<endl;
    printstudent(s);

    return 0;
}