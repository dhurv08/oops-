//C++ program prints the numbers from 1 to 6, excluding even numbers and stopping at 7.
#include<iostream>
using namespace std;
int main(){
    for(int i = 1 ; i<=7 ; i++){
    if(i%2 == 0){
        continue;
    }else{
        cout<<i<<endl;
    }
    }
    return 0;
}