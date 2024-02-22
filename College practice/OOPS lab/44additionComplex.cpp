//WAP to show sum of two complex numbers using friend function 
#include <iostream>
using namespace std;

class Complex {
private:
double real;
double imaginary;

public:
// Default constructor
Complex() : real(0.0), imaginary(0.0) {}

// Parameterized constructor with real and imaginary parts
Complex(double r, double i) : real(r), imaginary(i) {}

// Function to add two complex numbers
Complex add(const Complex& other) {
Complex result;
result.real = real + other.real;
result.imaginary = imaginary + other.imaginary;
return result;
}

// Function to display the complex number
void display() {
cout << real << " + " << imaginary << "i";
}
};

int main() {
// Create two complex numbers
Complex num1(3.0, 2.5);
Complex num2(1.5, 4.0);

// Find the sum of the two complex numbers
Complex sum = num1.add(num2);

// Display the result
cout << "Sum: ";
sum.display();
cout << endl;

return 0;
}