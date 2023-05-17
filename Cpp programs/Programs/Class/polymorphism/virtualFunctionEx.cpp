#include<iostream>
using namespace std;
 class Base{
    public :
    virtual void show(){
          cout<<"Base show";
      }
 };

 class Derived: public Base{
    public :
    //   void show(){
    //       cout<<"Derived show";
    //   }
 };


int main(){
 Base * b;
 Derived d;
 b= &d;
 b->show();

    return 0;
}