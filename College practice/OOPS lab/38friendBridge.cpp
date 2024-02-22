#include <iostream>
using namespace std;

class ClassB; // Forward declaration

class ClassA {
private:
    int privateValueA;

public:
    ClassA(int valueA) : privateValueA(valueA) {}

    // Declare ClassB as a friend class
    friend void bridgeFunction(ClassA&, ClassB&);
};

class ClassB {
private:
    int privateValueB;

public:
    ClassB(int valueB) : privateValueB(valueB) {}

    // Declare ClassA as a friend class
    friend void bridgeFunction(ClassA&, ClassB&);
};

// Friend function to access private members of both classes
void bridgeFunction(ClassA& objA, ClassB& objB) {
    cout << "Value from ClassA: " << objA.privateValueA << endl;
    cout << "Value from ClassB: " << objB.privateValueB << endl;
}

int main() {
    ClassA objA(42);
    ClassB objB(99);
    bridgeFunction(objA, objB);
    return 0;
}
