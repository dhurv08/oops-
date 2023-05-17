// To check the greatest of Three numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter a :" << endl;
    cin >> a;
    cout << "Enter b :" << endl;
    cin >> b;
    cout << "Enter c :" << endl;
    cin >> c;

    if (a >= b && a >= c)
    {
        cout << "The greatest number is " << a;
    }
    else
    {
        if (b >= a && b >= c)
        {
            cout << "The greatest number is " << b;
        }
        else
        {
            cout << "The greatest number is " << c;
        }
    }
    return 0;
}