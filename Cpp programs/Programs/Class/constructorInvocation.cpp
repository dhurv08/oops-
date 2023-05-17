#include<iostream>
using namespace std;
class Base {
    public:
      Base(){
        cout<<"Base class's constructor called\n";
      }
};


class Derived : public Base{
    public:
      Derived(){
        cout<<"Derived class's constructor called";
      }
};


int  main(){

    Derived d;
    return 0;
}
