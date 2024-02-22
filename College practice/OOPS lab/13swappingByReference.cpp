#include <iostream>
using namespace std;
void swapByReference(int& x, int& y);
int main() {
    int x = 5, y = 10;
    cout << "Before swapping: x = " << x << ", y = " << y <<endl;
    swapByReference(x, y);
    cout << "After swapping: x = " << x << ", y = " << y <<endl;
    return 0;
}
void swapByReference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "During swapping: x = " << x << ", y = " << y <<endl;
}