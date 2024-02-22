// Print the counting  with decision making statement 1 to 10 using goto Statement.
#include <iostream>
using namespace std;
int main()
{
    int count = 1;

count_lable:

    cout << count << endl;
    count++;
    if (count <= 10)
    {
        goto count_lable;
    }

    return 0;
}