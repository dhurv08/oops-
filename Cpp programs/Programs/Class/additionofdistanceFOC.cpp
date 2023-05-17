#include<iostream>
using namespace std;
class Distance
{
private:
   int feet;
   int inches;

public:
   void setvalue(int f, int i)
   {
     feet=f;
     inches=i;
   }

   Distance add(Distance d)
   {
      Distance d3;
      d3.feet = feet + d.feet;
      d3.inches = inches + d.inches;
      if(d3.inches > 11)
    {   d3.inches = d3.inches % 12;
       d3.feet+= int(d3.inches / 12);}
       return d3;
   }
   void printvalue()
   {
      cout<<" \nFEET AND INCHES = "<<feet<<" feet "<<inches<<" inches ";
  }
};
// //   void Distance :: setvalue(int f, int i)
// //   {
// //        feet=f;
// //        inches=i;
//   }
//   void Distance :: printvalue()
//   {
//       cout<<" \nFEET AND INCHES = "<<feet<<inches;
//   }
  int main()
  {
    Distance one,two,sum;
    one.setvalue(3,5);
    one.printvalue();
    two.setvalue(4,3);
    two.printvalue();

    sum= one.add(two);
    sum.printvalue();

  return 0;
  }