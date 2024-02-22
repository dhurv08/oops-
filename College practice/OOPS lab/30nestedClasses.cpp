#include<iostream>
using namespace std;
class OuterClass {
public:
    OuterClass() {
        cout << "OuterClass constructor" << endl;
    }

    void outerMethod() {
        cout << "OuterClass method" << endl;
    }

    // Nested class
    class NestedClass {
    public:
        NestedClass() {
            cout << "NestedClass constructor" << endl;
        }

        void nestedMethod() {
            cout << "NestedClass method" << endl;
        }
    };
};

int main() {   
    OuterClass outerObj;
    outerObj.outerMethod();

    OuterClass::NestedClass nestedObj;
    nestedObj.nestedMethod();

    return 0;
}
