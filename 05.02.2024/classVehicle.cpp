/*Write a Java program to create a vehicle class hierarchy. The base class should be Vehicle, 
with subclasses Truck, Car and Motorcycle. 
Base should have properties such as make, model, year, and sub class should have fuel type.*/
#include<iostream>
using namespace std;
class Vehicle{
    private: 
    string model;
    string maker;
    int year;

    public:
    void displayInfo(){
        cout<<"Enter the year = "<<endl;
        cin>>year;  
        cout<<"Enter the model = "<<endl;
        cin>>model;  
        cout<<"Enter the maker = "<<endl;
        cin>>maker;
    }
};
class Truck : public Vehicle{
    private :
    string fuelType;

    public:
    void displayInfo(){
        cout<<"__TRUCK__"<<endl;
        Vehicle::displayInfo();
        cout<<"Enter the fuel Type = "<<endl;
        cin>>fuelType;
    }
};
class Car : public Vehicle{
    private :
    string fuelType;

    public:
    void displayInfo(){
        cout<<"__CAR__"<<endl;
        Vehicle::displayInfo();
        cout<<"Enter the fuel Type = "<<endl;
        cin>>fuelType;
    }
};
class Motorcycle : public Vehicle{
    private :
    string fuelType;

    public:
    void displayInfo(){
        cout<<"__MOTORCYCLE__"<<endl;
        Vehicle::displayInfo();
        cout<<"Enter the fuel Type = "<<endl;
        cin>>fuelType;
    }
};
int main(){
    Truck t;
    Car c;
    Motorcycle m;

    t.displayInfo();
    c.displayInfo();
    m.displayInfo();

    return 0;
}