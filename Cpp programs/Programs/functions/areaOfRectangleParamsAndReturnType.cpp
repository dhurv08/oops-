/*Calculate the area of the rectangle using 4 categories of functions
There are four categories of functions -
1. No Return Type And No Params
2. No Return Type And With Params
3. With Return Type And With Params
4. With Return Type And No Params */
#include<iostream>
using namespace std;
void areaOfRectangle1();                 //No Return Type And No Params
void areaOfRectangle2(float , float);    //No Return Type And With Params
float areaOfRectangle3(float , float);   //With Return Type And With Params
float areaOfRectangle4();                //With Return Type And No Params
int main(){
    float length,breadth,area;

    //No Return Type And No Params
    areaOfRectangle1();


    //No Return Type And With Params
    cout<<"Enter the length = ";
    cin>>length;
    cout<<"Enter the breadth = ";
    cin>>breadth;
    areaOfRectangle2(length , breadth);

    //With Return Type And With Params
    cout<<"Enter the length = ";
    cin>>length;
    cout<<"Enter the breadth = ";
    cin>>breadth;
    area = areaOfRectangle3(length, breadth);
    areaOfRectangle3(length , breadth);
    cout<<"Area of rectangle 3 = "<<area<<endl;


    //With Return Type And No Params
    area = areaOfRectangle4();
    cout<<"Area of rectangle 4 = "<<area<<endl; 
    return 0;
}
//No Return Type And No Params
void areaOfRectangle1(){
    float length,breadth,area;
    cout<<"Enter the length = ";
    cin>>length;
    cout<<"Enter the breadth = ";
    cin>>breadth;

    area = length * breadth;
    cout<<"Area of rectangle 1 = "<<area<<endl;
}

//No Return Type And With Params
void areaOfRectangle2(float length, float breadth){
    float area = length * breadth;
    cout<<"Area of rectangle 2 = "<<area<<endl;
}

//With Return Type And With Params
float areaOfRectangle3(float length, float breadth){
    float area = length * breadth;

    return area;
}

//With Return Type And No Params
float areaOfRectangle4(){
    float length,breadth,area;

    cout<<"Enter the length = ";
    cin>>length;
    cout<<"Enter the breadth = ";
    cin>>breadth;

    area = length * breadth;
    return area;
}   