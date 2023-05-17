//using set width function using header file iomaniac
#include<iostream>
#include<iomanip>
using namespace std;
struct employee{
    string id;
    string name;
    string salary;
    string blood_Group;
    string departement;
};
int main(){
    int i,n;
    cout<<"Enter the number of employee = "<<endl;
    cin>>n;

    struct employee s[n];
    for(i=0;i<n;i++){
        cout<<"Enter the details of Employee "<<(i+1)<<endl;
        cout<<"Enter Id = ";
        cin>>s[i].id;
        cout<<"Enter Name = ";
        cin>>s[i].name;
        cout<<"Enter Salary = ";
        cin>>s[i].salary;
        cout<<"Enter Blood Group = ";
        cin>>s[i].blood_Group;
        cout<<"Enter Departement = ";
        cin>>s[i].departement;
    }

    cout<<"___Details Of Employees___"<<endl;
    cout<<setw(5)<<"ID"<<setw(15)<<"Name"<<setw(10)<<"Salary"<<setw(15)<<"Blood Group"<<setw(15)<<"Departement"<<endl;
    for(i=0 ; i<n ;i++){
        cout<<setw(5)<<s[i].id<<setw(15)<<s[i].name<<setw(10)<<s[i].salary<<setw(15)<<s[i].blood_Group<<setw(15)<<s[i].departement<<endl;
    }
    return 0;
}