#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}

float add(double a, double b) {
    return a + b;
}

int main() {
    int intResult = add(5, 3);
    double doubleResult = add(2.5, 3.7);

    cout <<"Sum of integers: "<<intResult<<endl;
    cout <<"Sum of doubles: "<<doubleResult<<endl;
    return 0;
}
