#include<iostream>
using namespace std;
class Time
{
 private:
    int hours;
    int minutes;
    int seconds;
 public:
   //  Time(){
   //     cout<<"Constructor 1 is called"<<endl;
   //     hours=1;
   //     minutes=1;
   //     seconds=1;
   //  }
   Time(){
      
   }
    Time(int h,int m){
      //  cout<<"Constructor 2 is called"<<endl;
       hours=h;
       minutes=m;
    }
      Time(int h,int m,int s): Time(h,m){
      //  cout<<"Constructor 2 is called"<<endl;
     
       seconds=s;
    }
    Time(Time &t1){
      hours=t1.hours;
      minutes=t1.minutes;
      seconds= t1.seconds;
    }
 
    void setTime(int i,int j,int k)
    {  hours=i;
       minutes=j;
       seconds=k;
    }
    void displayTime()
    {
        cout<<" \nHH:MM:SS = "<<hours<<":"<<minutes<<":"<<seconds;
    }
    ~Time(){
      cout<<"\nDestructor is called"<<endl;

    }
    


};    
    int main()
    {
       Time ONE(05,48,55),TWO,THREE;
       TWO=ONE;
      //  ONE.setTime(05,48,55);
       ONE.displayTime();
      //  TWO.setTime(11,32,44);
       TWO.displayTime();

       return 0;
    }