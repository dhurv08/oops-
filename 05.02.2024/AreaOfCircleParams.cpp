/*Take input from the user and create the function with name of AreaOfCircle and pass parameter to check the area of circle.*/
#include<iostream>
using namespace std;
float areaOfCircle(float r);      //declaration
int main(){
    float r;
    cout<<"Enter the radius of circle "<<endl;
    cin>>r;

    float b = areaOfCircle(r);    //calling
    cout<<"area of circle = "<<b;

    return 0;

}
float areaOfCircle(float r) {
    float area = 3.14 *r*r;
x`  
    return area;
}     //defination