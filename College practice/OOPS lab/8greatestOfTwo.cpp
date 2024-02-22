// To check the greatest of two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a :" << endl;
    cin >> a;
    cout << "Enter b :" << endl;
    cin >> b;

    if (a == b)
    {
        cout << "Equal";
    }
    else
    {
        if (a > b)
        {
            cout << "a is greater";
        }
        else
        {
            cout << "b is greater";
        }
    }

    return 0;
}