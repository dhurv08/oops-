#include<iostream>
using namespace std;
 class Shape{
   protected:
    int dim;
    public :
    void setDimesion(int d){
      dim=d;
    }

    virtual void area()=0;
 };

 class Circle: public Shape{
    public :
    void  area(){
      cout<<"Area of circle= " <<(3.14*dim*dim)<<endl;
    }
      
 };
 class Square: public Shape{
    public :
    void  area(){
      cout<<"Area of square= " <<(dim*dim)<<endl;
    }
      
 };


int main(){
  Circle c;
  Square s;

  c.setDimesion(5);
  c.area();
  s.setDimesion(10);
  s.area();
  

    return 0;
}