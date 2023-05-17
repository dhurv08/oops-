/*  Create a class Time, with the following details: 
Fields - hours, minutes, seconds
Functions - 
1.setTime() which will accept h,m, and s and set them into respective fields
2. displayTime()  which will display these fields in hh:mm::ss  */
#include<iostream>
using namespace std;
class Time{
    private:
    int hours,minutes,seconds;

    public:
    void setTime(int h, int m, int s){
        hours = h;
        minutes = m;
        seconds = s;
    }

    void displayTime(){
        cout<<"HH:MM:SS = "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
    
};
int main(){
    Time t;

    t.setTime(10,20,30);
    t.displayTime();
    
    return 0;
}