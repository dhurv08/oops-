//Input distance in inches and convert into feet and inches
#include<iostream>
using namespace std;
int main(){
    float inches,feet,distance;

    cout<<"Enter the distance :"<<endl;
    cin>>distance;

    feet = distance / 12;
    inches =(int)distance % 12;

    cout<<"Value in feet:inches is = "<<feet<<" feets and "<<inches<<" inches."<<endl;
    
    return 0;
}