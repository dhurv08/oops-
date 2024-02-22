//Write a program in which function of one class acts as a friend of another class
#include <iostream>
using namespace std;

// Forward declaration of ClassB
class ClassB;

// ClassA definition
class ClassA {
private:
    int privateValueA;

public:
    ClassA(int valueA) : privateValueA(valueA) {}

    // Declare a function in ClassA as a friend of ClassB
    friend void friendFunction(ClassA& objA, ClassB& objB);
};

// ClassB definition
class ClassB {
private:
    int privateValueB;

public:
    ClassB(int valueB) : privateValueB(valueB) {}

    void displayValueB() {
        cout << "Value from ClassB: " << privateValueB << endl;
    }
};

// Friend function definition in ClassA, acting as a friend of ClassB
void friendFunction(ClassA& objA, ClassB& objB) {
    cout << "Value from ClassA accessed by ClassB: " << objA.privateValueA << endl;
}

int main() {
    // Create instances of ClassA and ClassB
    ClassA objA(42);
    ClassB objB(99);

    // Display the value from ClassB
    objB.displayValueB();

    // Call the friend function to access ClassA's private member from ClassB
    friendFunction(objA, objB);

    return 0;
}
