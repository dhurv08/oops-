//Illustrate modes of inheritance
#include <iostream>
using namespace std;
class A
{
private:
    int x;

public:
    int y;

protected:
    int z;
};

class B : private A
{
private:
public:
protected:
};

class C : public A
{
private:
public:
protected:
};

class D : protected A
{
private:
public:
protected:
};

int main()
{
    B a1;
    C b1;
    D c1;

    a1.y;    // this will show error 
    b1.y;
    c1.y;     //this will show error 

    return 0;
}