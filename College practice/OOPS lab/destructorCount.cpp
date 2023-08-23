#include<iostream>
using namespace std;
class A{
    int number;
    public:
    A(int a)
    {
    number=a;
        cout<<"number of constructor is "<<number<<endl;
    }

    ~A(){
        cout<<"Number of constructor destroyed "<<number<<endl;
    }
};
int main(){
    A xy(1);
    A xyz(2);
    A abc(3);
    return 0;
}