/* Input any number from the user and print its multiplication table (up to 10 ) in the following format:
  eg if number entered is 3 , its table should display as 3 X 1 = 3 and so on.*/
  #include<iostream>
  using namespace std;
  int main(){
    int i,a;

    cout<<"Enter a=";
    cin>>a;

    for(i=1;i<=10;i++){
        cout<<a<<"*"<<i<<"="<<a*i<<endl;
    }
    return 0;
  }
