//Write a program of unary operator overloading
#include <iostream>
using namespace std;

class Counter {
private:
    int count;

public:
    Counter() : count(0) {}

    // Overload the prefix increment operator (++count)
    Counter& operator++() {
        ++count;
        return *this;
    }

    // Overload the postfix increment operator (count++)
    Counter operator++(int) {
        Counter temp(*this); // Create a temporary copy of the current object
        ++count;             // Increment the count
        return temp;         // Return the copy (original state)
    }

    void display() const {
        cout << "Count: " << count << endl;
    }
};

int main() {
    Counter c1, c2;

    c1.display();      // Initial count: 0

    ++c1;              // Increment using the prefix operator (++count)
    c1.display();      // Count after prefix increment: 1

    c2 = c1++;         // Increment using the postfix operator (count++)
    c1.display();      // Count after postfix increment: 2
    c2.display();      // Count returned from postfix increment: 1

    return 0;
}
