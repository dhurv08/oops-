// Input any string, reverse it, and check whether it is palindrome.
#include<iostream>      
#include<cstring>
using namespace std;

 int main(){
  int i,j;
  char name[100],reverse[100];
  cout<<"Enter the name : "<<endl;
  cin.getline(name,100);

  cout<<"Transversing the string : "<<endl;
  for(i=0;i<strlen(name);i++){
    cout<<name[i]<<endl;  
  }

  cout<<"Reversing the string : "<<endl;
  for(i=strlen(name)-1,j=0;i>=0,j<strlen(name);i--,j++){
    // cout<<name[i]<<endl;
    reverse[j]=name[i];
  }
  reverse[strlen(name)]='\0';
  cout<<reverse<<endl;

  if(strcmp(name,reverse)==0)
  cout<<"String is palindrome";
  else
  cout<<"String is not a palindrme";

  return 0;
 }
 