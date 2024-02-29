#include <iostream>
using namespace std;
class Base;
class Child{
    public:
        void friendFunction(Base &base);
   
};
class Base{
    private:
        int a = 10;
    protected:
        int b = 100;
    public:
        friend void Child::friendFunction(Base &base);
   
   
};


void Child::friendFunction(Base &base){
    cout<<"base a "<<base.a<<endl;
    cout<<"base b "<<base.b;
           
}
int main()
{
    Base b;
    Child child;
    child.friendFunction(b);
    return 0;
}