//Area of circle in Cpp
#include<iostream>
using namespace std;
int main(){
    const float PI = 3.14;
    float radius , area;

    cout<<"enter the radius:";
    cin>>radius;

    area = PI * radius * radius ;

    cout<<"Area of circle :"<<area;

    return 0;
}