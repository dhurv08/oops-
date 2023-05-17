#include <iostream>
using namespace std;
int main()
{
    int a, b, c, greatest;
    cout << "Enter a :";
    cin >> a;

    cout << "Enter b :";
    cin >> b;

    cout << "Enter c :";
    cin >> c;

    greatest = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    cout << greatest << " is the greatest";

    return 0;
}