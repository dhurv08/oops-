//Multiple Inheritance
#include<iostream>
using namespace std;
class A{
    public :
    void printA(){
        cout<<"A is called "<<endl;
    }
};
class B{
    public :
    void printB(){
        cout<<"B is called "<<endl;
    }
};
class C : public A , public B{
    public :
    void printC(){
        cout<<"C is called "<<endl;
    }
};
int main(){
    C c1;
    c1.printA();
    c1.printB();
    c1.printC();

}