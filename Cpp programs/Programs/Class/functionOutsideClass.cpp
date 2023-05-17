#include <iostream>
using namespace std;
class Time
{
private:
   int hours;
   int minutes;
   int seconds;

public:
   void setTime(int i, int j, int k);
   void displayTime();
   Time add(Time t)
   {
      Time t3;
      t3.hours = hours + t.hours;
      t3.minutes = minutes + t.minutes;
      t3.seconds = seconds + t.seconds;

      if (t3.seconds > 59)
      {
         t3.seconds = t3.seconds % 60;
         t3.minutes += int(t3.seconds / 60);
      }

      return t3;
   }
};
// Time::Time()
// {
// }

void Time ::setTime(int i, int j, int k)
{
   hours = i;
   minutes = j;
   seconds = k;
}
void Time::displayTime()
{
   cout << " \nHH:MM:SS = " << hours << ":" << minutes << ":" << seconds;
}
int main()
{
   Time ONE, TWO, SUM;
   ONE.setTime(05, 48, 55);
   ONE.displayTime();
   TWO.setTime(11, 32, 44);
   TWO.displayTime();

   SUM = ONE.add(TWO);
   SUM.displayTime();

   return 0;
}