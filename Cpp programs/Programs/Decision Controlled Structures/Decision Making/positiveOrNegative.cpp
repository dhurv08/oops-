// To check the given number is positive or negative
#include <iostream>
using namespace std;
int main()
{
    int a;

    cout << "Enter the number :" << endl;
    cin >> a;

    if (a == 0)
    {
        cout << "Number is 0";
    }
    else
    {
        if (a > 0)
        {
            cout << "Number is Positive";
        }
        else
        {
            cout << "Number is Negative";
        }
    }
    return 0;
}