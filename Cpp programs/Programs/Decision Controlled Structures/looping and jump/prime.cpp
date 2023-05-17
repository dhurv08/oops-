// Input any number and check whether it is prime or not  .
#include<iostream>
using namespace std;
int main(){
    int i,n;
    bool isPrime=true;                  //this is called flag (to check a value)
    cout<<"Enter the number ="<<endl;
    cin>>n;
    
   for(i=2;i<n;i++){
    if(n%i ==0){
        isPrime = false;
        break;
    }
   }
  if(isPrime == true){
    cout<<"Number is prime";
  }else {
    cout<<"Number is not prime";
  }
 return 0;
}    
      