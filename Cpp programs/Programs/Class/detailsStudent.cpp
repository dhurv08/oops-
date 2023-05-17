// Input and print details of n students.
#include <iostream>
using namespace std;
class Student {
public:
  string name;
  int age;
  string address;
  int rollNo;
  
  void readDetails() {
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    cout<<"Enter address: ";
    cin>>address;
    cout<<"Enter roll number: ";
    cin>>rollNo;
  }

  void printDetails() {
    cout<<"Name: "<<name<< endl;
    cout<<"Age: "<<age<< endl;
    cout<<"Address: "<<address<< endl;
    cout<<"Roll number: "<<rollNo<<endl;
  }
};

int main() {
  int n;
  cout<<"Enter the number of students: ";
  cin>>n;

  Student students[n];
  for (int i = 0;i<n;i++) {
    cout<<"Enter details of student "<<(i+1)<<":"<<endl;
    students[i].readDetails();
  }

  cout<<endl;
  cout<<"Details of all students :"<<endl;
  for (int i=0;i<n;i++) {
    cout<<"Details of student "<<(i+1)<<":"<<endl;
    students[i].printDetails();
    cout<<endl;
  }
  return 0;
}
