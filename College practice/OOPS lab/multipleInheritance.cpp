#include <iostream>
using namespace std;
class Baseclass1
{
public:
    int x;
    void setX(int a)
    {
        x = a;
    }
    void showX()
    {
        cout << "x:" << x << "\n";
    }
};
class Baseclass2
{
public:
    int y;
    void setY(int a)
    {
        y = a;
    }
    void showY()
    {
        cout << "y:" << y << "\n";
    }
};
// Inherit Baseclass1 and Baselass2 with public and protected mode
// accordingly
class Subclass : public Baseclass1, protected Baseclass2
{
public:
    Subclass()
    {
        cout << "\nSubclass ";
    }
    void SubY(int a)
    {
        y = a;
    }
    void SubYshow()
    {
        cout << " y:" << y;
    }
};
int main()
{
    Baseclass1 b;
    Baseclass2 B;
    Subclass s;
    s.setX(15);
    s.showX();
    // Will generate error as setY and showY are not members of subclass and
    // class is inhereted in protected mode
    // s.setY(50);
    // s.showY();
    s.SubY(50);
    s.SubYshow();
    return (0);
}