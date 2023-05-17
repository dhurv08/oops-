// Illustrate the difference in memory allocation for a structure and union.
#include<iostream>
using namespace std;
struct student1{
    char name[50];
    int id;
};
union student2{
    char name[50];
    int id;
};
int main(){
    struct student1 s;
    union student2 v;
    // cout<<"_For Structure_"<<endl;
    // cout<<"Enter Name = "<<endl;
    // cin>>s.name;
    // cout<<"Enter ID = "<<endl;
    // cin>>s.id;

    // cout<<"_For Union_"<<endl;
    // cout<<"Enter Name = "<<endl;
    // cin>>v.name;
    // cout<<"Enter ID = "<<endl;
    // cin>>v.id;
    
    cout<<"___Memory Allocation___"<<endl;

    cout<<"Size of  structure = "<<sizeof(student1)<<" bytes"<<endl;
    cout<<"Size of  Union = "<<sizeof(student2)<<" bytes"<<endl;

    // cout<<"Size of Name for Union = "<<sizeof(v.name)<<" bytes"<<endl;
    // cout<<"Size of ID for Union = "<<sizeof(v.id)<<" bytes"<<endl;

    return 0;
}