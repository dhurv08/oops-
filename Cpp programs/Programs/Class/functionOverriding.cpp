//Write a C++ program to explain function overriding
#include<iostream>
using namespace std;
class A{
    private :
    
    public :
    void print(){ 
    cout<<"Class A is called "<<endl;
    }
};
class B : public A{
    private :

    public :
    void print(){
        //To prevent function overriding we use scope resolution operator ::
        // A::print();
    cout<<"Class B is called "<<endl;
    }
};
int main(){
    B b1;
    b1.print();
    return 0;
}