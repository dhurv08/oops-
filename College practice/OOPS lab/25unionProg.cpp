// Illustrate the difference in memory allocation for a structure and union.
#include<iostream>
using namespace std;
struct student1{
    int id;
    char name[50];

};
union student2{
    int id;
    char name[50];
};
int main(){
    struct student1 s;
    union student2 v;
        
    cout<<"___Memory Allocation___"<<endl;

    cout<<"Size of  structure = "<<sizeof(student1)<<" bytes"<<endl;
    cout<<"Size of  Union = "<<sizeof(student2)<<" bytes"<<endl;

    return 0;
}