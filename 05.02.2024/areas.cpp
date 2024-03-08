/*C Program find the area of circle, rectangle, square using function and return the value. */
#include<iostream>
using namespace std;
float circle(float x ){
    return (3.14*x*x);
}
float rectangle(float x , float y ){
    return (x*y);
}
float square (float x ){
    return (x*x);
}
int main(){
    float x,y,z;
    float a,b,c,d;

    cout<<"Enter the radius of circle = ";
    cin>>a;
    cout<<"Enter the length and breadth of rectangle = ";
    cin>>b>>c;
    cout<<"Enter the side of square = ";
    cin>>d;

    x = circle(a);
    y = rectangle(b,c);
    z = square(d);
    cout<<"Area of circle = "<<x<<endl;
    cout<<"Area of rectangle = "<<y<<endl;
    cout<<"Area of square = "<<z<<endl;

    return 0;
}