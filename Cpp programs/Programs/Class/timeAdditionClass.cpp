//Add two-time objects and display added times in the proper format.(hh:mm:ss)
#include<iostream>
using namespace std;
class Time{
    private :
    int hours , minutes , seconds ;

    public:

    void settime(int x, int y, int z){
        hours =x;
        minutes = y;
        seconds =z;
    }

    void displayTime(){
        cout<<"HH:MM:SS = "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }

    Time add(Time t){
        Time t3;

      t3.hours = hours + t.hours;
      t3.minutes = minutes + t.minutes;
      t3.seconds = seconds + t.seconds;

      if (t3.seconds > 59)
      {
        t3.seconds = t3.seconds % 60;
        t3.minutes += int(t3.seconds / 60);
      }

      if(t3.minutes > 59){
        t3.minutes = t3.minutes % 60;
        t3.hours += int(t3.minutes/60);
      }

      return t3;
    }

};
int main(){
    Time t1,t2,addition;
    t1.settime(2,60,60);
    t1.displayTime();

    t2.settime(0,1,10);
    t2.displayTime();

    addition=t1.add(t2);
    addition.displayTime();

    return 0;
}