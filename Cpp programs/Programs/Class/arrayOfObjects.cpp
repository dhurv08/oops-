#include<iostream>
using namespace std;
class Time
{
 private:
    int hours;
    int minutes;
    int seconds;
 public:
  void inputTime(int i)
    { 
      cout<<"Enter time (h,m,s)  .-> "<<(i+1)<<endl;
         cin>> hours>>minutes>>seconds;
    }
    void setTime(int i,int j,int k)
    {  hours=i;
       minutes=j;
       seconds=k;
    }
    void displayTime()
    {
        cout<<" \nHH:MM:SS = "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};    
    int main()
    {
       Time times[3];
       int h,m,s;
       for(int i=0;i<3;i++)  {
        //  cout<<"Enter time (h,m,s)  .-> "<<(i+1)<<endl;
        //  cin>> h>>m>>s;
        //  times[i].setTime(h,m,s);

         times[i].inputTime(i);
       }
       cout<<"Times are ---"<<endl;
        for(int i=0;i<3;i++)  {
               times[i].displayTime();
       }

       return 0;
    }