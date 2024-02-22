//Concept of Friend Function
#include <iostream>
using namespace std;

class MyClass {
private:
int data;

public:
MyClass(int d) : data(d) {}

// Declare the friend function for overloading the << operator
friend ostream& operator<<(ostream& os, const MyClass& obj);
};

// Define the friend function for overloading the << operator
ostream& operator<<(ostream& os, const MyClass& obj) {
os << "Data: " << obj.data;
return os;
}

int main() {
MyClass obj(42);
// Use the overloaded << operator to print the object's data
cout << obj << endl;
return 0;
}
