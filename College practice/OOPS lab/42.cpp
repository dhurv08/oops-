//Write a program to find the sum of two complex numbers using binary operator
#include <iostream>
using namespace std;

class Complex {
private:
    double real;
    double imaginary;

public:
    Complex() : real(0.0), imaginary(0.0) {}
    Complex(double r, double i) : real(r), imaginary(i) {}

    // Overload the binary addition operator (+)
    Complex operator+(const Complex& other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    // Display the complex number
    void display() const {
        cout << real << " + " << imaginary << "i";
    }
};

int main() {
    // Create two complex numbers
    Complex num1(3.0, 2.5);
    Complex num2(1.5, 4.0);

    // Find the sum of the two complex numbers using the binary addition operator
    Complex sum = num1 + num2;

    // Display the result
    cout << "Sum: ";
    sum.display();
    cout << endl;

    return 0;
}