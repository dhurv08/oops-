//Input any string and convert it to lowercase.
#include<iostream>     
#include<cstring>
using namespace std;
int main(){
  int i;
  char name[100];
  cout<<"Enter the name: "<<endl;
  cin.getline(name,100);

  cout<<"Transversing the string (Converting to Uppercase) : "<<endl;
  for(i=0 ; i<strlen(name) ; i++){
    name[i]=name[i]+32;
    cout<<name[i]<<" "<<(int)name[i]<<endl;
  }
    return 0;
 }