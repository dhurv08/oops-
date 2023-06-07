#include<iostream>
#include<fstream>
using namespace std;
int main(){
  string name;
  fstream f("demo.txt",ios::in);
//   cout<<"Enter you name";
//   cin>>name;
 while(getline(f,name))
 {
    cout<<"name ="<<name<<endl;
 }
  f.close();

  ofstream outStr("demo2.txt");
  outStr<<"Hello World";
  outStr.close();

//   ifstream instr("demo2.txt");
//   while(getline(instr,name))
//  {
//     cout<<"name ="<<name<<endl;
//  }
//   instr.close();

}