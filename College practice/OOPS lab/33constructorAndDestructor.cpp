#include<iostream>
#include<cmath>
using namespace std;
class areasOf{
    public:
    areasOf(int a , int b){
        cout<<"Area of rectangle = "<<(a*b)<<endl;
    }

    areasOf(int a){
        cout<<"Area of Square = "<<(a*a)<<endl;
    }

    areasOf(int a , int b , int c){
        int s = (a+b+c)/2;
        int area = (sqrt(s*(s-a)*(s-b)*(s-c)));
        cout<<"Area of Triangle = "<<area<<endl;
    }
    ~areasOf(){
        cout<<"Destructor is called "<<endl;
    }
};
int main(){
    int length , breadth , height;

    cout<<"Enter side1 = ";
    cin>>length;
    cout<<"Enter side2 = ";
    cin>>breadth;
    cout<<"Enter side3 = ";
    cin>>height;
    cout<<endl;

    areasOf a1(length,breadth);
    areasOf a2(length);
    areasOf a3(length,breadth,height);
    return 0;
}
