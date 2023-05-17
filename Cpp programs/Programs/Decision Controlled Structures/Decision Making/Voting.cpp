// To check whether the user is eligible to vote or not
#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age :" << endl;
    cin >> age;

    if (age < 18)
    {
        cout << "You are too young to vote";
    }
    else
    {
        cout << "You are eligible to vote";
    }

    return 0;
}