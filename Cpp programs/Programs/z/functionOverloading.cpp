#include<iostream>
using namespace std;
void area(float);
void area(float , float);
int main(){
    int a , b;
    cout<<"Enter the side of sq =";
    cin>>a;
    area(a);

    cout<<"Enter the value of a =";
    cin>>a;
    cout<<"Enter the value of b =";
    cin>>b;
    area(a,b);

    return 0;
}
void area(float a){
    
    float area=a*a;
    cout<<"Area of square = "<<area<<endl;    
}
void area(float a , float b){

    float area=a*b;
    cout<<"Area of rectangle = "<<area<<endl;    
}
