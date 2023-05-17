#include<iostream>
using namespace std;
class A {
    public:
    int x;
      void show(){
        cout<<"show function a called\n";
      }
};
class B :  public A{
    public:
        void show(){
        A::show();
        // B::x;
        cout<<"show function of b called\n";
      }
};



int  main(){

    B b;
    b.show();

    return 0;
}
