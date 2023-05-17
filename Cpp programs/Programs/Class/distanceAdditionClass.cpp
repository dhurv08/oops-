//Add two distance objects and display added distance in the proper format. (feets and inches)
#include<iostream>
using namespace std;
class Distance {
private:
    int feet,inches;

public:

    Distance(int ft= 0 , int in= 0){
        feet = ft;
        inches = in;
    }

    void displayDistance() {
        cout<<"Distance: "<<feet<<" feet, "<<inches<<" inches" <<endl;
    }

    Distance addition(Distance dis) {
        int totalFeet = feet + dis.feet;
        int totalInches = inches + dis.inches;

        if (totalInches >= 12) {
            totalFeet++;
            totalInches -= 12;
        }

        return Distance(totalFeet,totalInches);
    }
};
int main() {
    Distance d1(5,8);
    Distance d2(3,10);

    Distance sum =d1.addition(d2);
    sum.displayDistance();

    return 0;

}