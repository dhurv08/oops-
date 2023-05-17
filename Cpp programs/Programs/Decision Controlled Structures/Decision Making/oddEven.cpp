// To check whether the number is odd or even
#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Enter the number";
    cin >> a;

    if (a == 0)
        cout << "Number is 0";
    // cout<<"Anything";
    else

        if (a % 2 == 0)
    {
        cout << "The number is Even";
    }
    else
    {
        cout << "The number is Odd";
    }

    return 0;
}