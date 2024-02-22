#include<iostream>
using namespace std;
class Rectangle{
    private:
    float length;
    float breadth;

    public:
    Rectangle(){
        cout<<"__Constructor Started__"<<endl;
        length = 5;
        breadth = 10;
        cout<<"__Constructor Finished__"<<endl;
    }
    void area(){
        float area = length*breadth;
        cout<<"The area of rectangle is = "<<area<<endl;
    }
};
int main(){
    Rectangle obj;
    obj.area();
}