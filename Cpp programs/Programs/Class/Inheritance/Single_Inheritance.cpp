// Illustrate different types of inheritance
#include<iostream>
using namespace std;
class A{
    public :
    void printA(){
        cout<<"A is called "<<endl;
    }
};
//This is Single Inheritance
class B : public A{
    public :
    void printB(){
        cout<<"B is called "<<endl;
    }
};
int main(){
     B b1;
     b1.printA();
     b1.printB();

    return 0;
}