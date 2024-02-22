#include<iostream> 
using namespace std;

class rectangle{ 
private: 
int length; 
int breath; 

public: 
void read(){ 
cout << "enter the length = "; 
cin >> length; 
cout << "enter the breath = "; 
cin >> breath; 
} 
void area(){ 
float ar; 
ar= length*breath; 
cout << "area is : " <<ar<<endl; 
}

}; 

int main(){ 
rectangle obj; 
obj.read(); 
obj.area(); 

return 0;
} 