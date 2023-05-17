//replace(): Replaces a substring within the string with another substring.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str = "Hello World";
    str.replace(6, 5, "Universe");

    cout<<str<<endl;
    return 0;
}