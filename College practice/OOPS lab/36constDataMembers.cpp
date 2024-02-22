#include <iostream>
using namespace std;
class Check
{
public:
    int value;
    void getValue()
        const
    {
        cout << "Hello Inside const";
    }
};
int main()
{
    Check c;
    c.getValue();
    return 0;
}