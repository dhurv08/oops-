//Operator overloading using friend function
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    // Constructors
    Complex() : real(0.0), imaginary(0.0) {}
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Declare the friend function for operator overloading
    friend Complex operator+(const Complex& num1, const Complex& num2);

    // Display the complex number
    void display() const {
        cout << real << " + " << imaginary << "i";
    }
};

// Friend function for operator overloading of addition
Complex operator+(const Complex& num1, const Complex& num2) {
    Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

int main() {
    // Create two complex numbers
    Complex num1(3.0, 2.5);
    Complex num2(1.5, 4.0);

    // Find the sum of the two complex numbers using the overloaded addition operator
    Complex sum = num1 + num2;

    // Display the result
    cout << "Sum: ";
    sum.display();
    cout << endl;

    return 0;
}
