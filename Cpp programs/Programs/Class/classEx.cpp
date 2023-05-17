#include <iostream>
using namespace std;
class Student
{
private:
    int id;
    string name;

public:
    void setDetails(int i, string n)
    {
        id = i;
        name = n;
    }
    void printDetails()
    {
        cout << "\nid = " << id<<endl;
        cout << "name = " << name;
    }
};

int main()
{
    Student s1, s2;
    s1.setDetails(1, "abcd");
    s1.printDetails();
    s2.setDetails(2, "dflj");
    s2.printDetails();

    return 0;
}