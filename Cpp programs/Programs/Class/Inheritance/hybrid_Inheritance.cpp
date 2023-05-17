#include<iostream>
using namespace std;
class A {
    public:
      void show(){
        cout<<"show function called\n";
      }
};
/*We use virtual keyword here , to prevent the compiler from copying 

else it will do not show any result as the complier will get confused to pick the show from B or C.*/
class B : virtual public A{
  
};
class C : public virtual A{
    
};
class D : public B, public C{
    
};
int  main(){

    D d;
    d.show();
    return 0;
}
