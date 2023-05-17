// Create an employee structure with 5 fields and I/O details of one employee
#include<iostream>
using namespace std;
struct Employees{
    string id;
    string name;
    string departement;
    string position;
    string salary;
};
int main(){
    struct Employees s1;
    s1.id = "123";
    s1.name = "xyz";
    s1.departement = "IT";
    s1.position = "Manager";
    s1.salary = "80,000";

    cout<<"__Details of employee__"<<endl;
    cout<<"ID = "<<s1.id<<endl;
    cout<<"Name = "<<s1.name<<endl;
    cout<<"Departement = "<<s1.departement<<endl;
    cout<<"Position = "<<s1.position<<endl;
    cout<<"Salary = "<<s1.salary<<endl;

    return 0;
}