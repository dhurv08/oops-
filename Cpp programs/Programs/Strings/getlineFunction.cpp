//Usings getline function 

/*The C++ getline() is an in-built function defined in the <string. h>
header file that allows accepting and reading single and multiple line
strings from the input stream. In C++, the cin object also allows
input from the user, but not multi-word or multi-line input. 
That's where the getline() function comes in handy.*/
#include<iostream>
using namespace std;
int main(){

    char str[100];
    cout<<"Enter string 1 :"<<endl;
    cin.getline(str,100);
    
    char str2[100];
    cout<<"Enter string 2 :"<<endl;
    cin.getline(str2,100);

    cout<<"string 1 = "<<str<<endl;
    cout<<"string 2 = "<<str2<<endl;

    return 0;
}