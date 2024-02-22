#include<iostream>
using namespace std;
const float pi = 3.14;
class Circle{
    private:
    float r;

    public : 
    void read(){
        cout<<"Enter the radius of circle = ";
        cin>>r;
    }

    void areaOfCircle(){
        cout<<"Area of Circle = "<<(pi*(r*r))<<endl;
    }

    void circumfranceOfCircle(){
        cout<<"Circumfrance Of Circle = "<<(2*pi*r)<<endl;
    }
};
int main(){
    Circle obj;
    obj.read();
    obj.areaOfCircle();
    obj.circumfranceOfCircle();

    return 0;
}