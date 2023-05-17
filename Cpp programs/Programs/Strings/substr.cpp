//substr(): Returns a substring of the string.
#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string str = "Hello World";
    string sub = str.substr(6);

    cout<<sub;

    return 0;
}