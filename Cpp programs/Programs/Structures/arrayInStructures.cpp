//details of 'n' employees using an array of structures (format should be tabular)
#include<iostream>
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
    cout<<"Enter the number of employee = ";
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
    cout<<"ID"<<"\t"<<"Name"<<"\t"<<"Salary"<<"\t"<<"Blood Group"<<"\t"<<"Departement"<<endl;
    for(i=0 ; i<n ;i++){
        cout<<s[i].id<<"\t "<<s[i].name<<"\t"<<s[i].salary<<"\t"<<s[i].blood_Group<<"\t\t"<<s[i].departement<<endl;
    }
    return 0;
}