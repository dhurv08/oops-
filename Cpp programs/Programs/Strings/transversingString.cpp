//To transverse a C -string.
#include<iostream>    
#include<cstring>
using namespace std;
int main(){
  int i;
  char name[100];
  cout<<"Enter the name: "<<endl;
  cin.getline(name,100);

  cout<<"Transversing the string: "<<endl;
  for(i=0 ; i<strlen(name) ; i++){
    cout<<name[i]<<endl;
  }
 return 0;
 }