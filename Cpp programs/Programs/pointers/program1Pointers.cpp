//declare differen types of pointor varibles and print their addresses 
//Delcare and print pointer variables.
#include<iostream>
using namespace std;
int main(){
    //int
    int a = 10;
    int *ptr1;
    ptr1 = &a;
    cout<<"Value of a = "<<*ptr1<<endl;
    cout<<"Address of a = "<<ptr1<<endl;


    //float
    float b = 3.14;
    float *ptr2;
    ptr2 = &b;
    cout<<"Value of b = "<<*ptr2<<endl;
    cout<<"Address of b = "<<ptr2<<endl;

    //double
    double c = 3.1498474938171304;
    double *ptr3;
    ptr3 = &c;
    cout<<"Value of c = "<<*ptr3<<endl;
    cout<<"Address of c = "<<ptr3<<endl;

    //char
    char d ='r';
    char *ptr4;
    ptr4 = &d;
    cout<<"Value of d = "<<*ptr4<<endl;
    cout<<"Address of d = "<<ptr4<<endl;
    return 0;
}