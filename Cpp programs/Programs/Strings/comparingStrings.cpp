//Comparing Srtings
#include<iostream>       
#include<cstring>
using namespace std;

int main(){
  char str1[]= "hello";
  char str2[]= "hello";
  cout<<"On comparing the strings : "<<endl;
  
  int c=strcmp(str1,str2);
  if(c==0){
    cout<<"strings are equal"<<endl;
  }else
  cout<<"Are different"<<endl;

    return 0;
}