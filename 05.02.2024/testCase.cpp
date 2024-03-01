/*Write a program that reads a set of integers, and then prints the sum of the even and odd integers.
Test case
How many numbers you want to enter - 5
Enter number at 1 position - 2
Enter number at 2 position - 3
Enter number at 3 position - 1
Enter number at 4 position - 4
Enter number at 5 position - 8
Sum of even number is 14
Sum of odd number is 4*/
#include<iostream>
using namespace std;
int main() {
    int n, evenSum = 0, oddSum = 0;

    cout<<"Enter the numbers you want to enter: ";
    cin >> n;

    int numbers[n];

    cout<<"Enter "<<n<<" numbers :";
    for (int i = 0; i < n; ++i) {
        cin>>numbers[i];

        if (numbers[i] % 2 == 0) {
            evenSum += numbers[i];
        } else {
            oddSum += numbers[i];
        }
    }

    cout<<"Sum of even numbers is "<<evenSum<<endl;
    cout<<"Sum of odd numbers is "<<oddSum<<endl;

   return 0;
}