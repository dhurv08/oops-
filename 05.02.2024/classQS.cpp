/*Create a class with a method that prints "This is parent class" and its subclass with another
method that prints "This is child class". Now, create an object for each of the class and call
1 - method of parent class by object of parent class
2 - method of child class by object of child class
3 - method of parent class by object of child class*/
#include<iostream>
using namespace std;
class Parent {
    public:
    void showParent(){
        cout<<"This is parent class"<<endl;
    }
};
class Child : public Parent{
    public:
    void showChild(){
        cout<<"This is Child Class"<<endl;
    }
};
int main(){
    Parent p;
    Child c;
    p.showParent();  //1 - method of parent class by object of parent class
    c.showChild();  //2 - method of child class by object of child class
    c.showParent(); //3 - method of parent class by object of child class
    return 0;
}