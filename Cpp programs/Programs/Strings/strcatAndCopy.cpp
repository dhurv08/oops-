//strcat function in c++ gives a copy of a string to the end of another string.
//Using copy function
#include<iostream>       
#include<cstring>
using namespace std;

int main(){
  char str1[]= "My name is dhruv";
  char str2[]= "I live in jalandhar";

  strcat(str1,str2);
  cout<<str1<<endl;
  cout<<"Copying the strings : "<<endl;
  strcpy(str1,str2);
  cout<<str1<<endl;
  cout<<str2<<endl;

    return 0;
}