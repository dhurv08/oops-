#include <iostream> 
using namespace std;
class Baseclass
{
public:
    // Declaration of virtual function
    virtual void display()
    {
        cout << "\nBaseclass\n";
    }
};
class Childclass : public Baseclass
{
public:
    void display()
    {
        cout << "\nChildclass\n";
    }
};
int main()
{
    // Creating pointer of baseclass
    Baseclass *p, b;
    Childclass c;
    p = &c;
    p->display();
    p = &b;
    p->display();
    return (0);
}