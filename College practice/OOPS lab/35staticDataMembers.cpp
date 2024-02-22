#include <iostream>
using namespace std;
class check{
    private:
    int x;
    public :
    // declared a static variable of check class
    static int objectcount;
    // declared a static method of check class
    static void show();
    void setX(int a)
    {
        x = a;
    }
    void getX()
    {
        cout << "x:" << x << endl;
    }
    check()
    {
        objectcount++;
    }
};
// definition of static variable objectcount
int check::objectcount = 0;
// definition of static memeber show
void check::show()
{
    cout << "x is updated \n ";
}
int main()
{
    check obj;
    obj.setX(10);
    obj.getX();
    // accessing static method show
    check::show();
    check obj1;
    obj1.setX(20);
    obj1.getX();
    check::show();
    check obj2;
    obj2.setX(30);
    obj2.getX();
    check::show();
    check obj3;
    obj3.setX(40);
    obj3.getX();
    check::show();
    // Accessing static variable objectcount
    cout << "Number of objects created:" << check::objectcount << endl;
    return (0);
}