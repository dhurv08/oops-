#include <iostream>
using namespace std;
struct Point {
    int x;
    int y;
};
struct Rectangle {
    Point topLeft;
    Point bottomRight;
};

int main() {
    // Create a Point object
    Point p1;
    p1.x = 2;
    p1.y = 3;

    // Create another Point object
    Point p2;
    p2.x = 5;
    p2.y = 7;

    // Create a Rectangle object and initialize its points
    Rectangle rect;
    rect.topLeft = p1;
    rect.bottomRight = p2;

    // Access and display the values of the nested structures
    cout << "Top Left Point: (" << rect.topLeft.x << ", " << rect.topLeft.y << ")" << endl;
    cout << "Bottom Right Point: (" << rect.bottomRight.x << ", " << rect.bottomRight.y << ")" << endl;

    return 0;
}
