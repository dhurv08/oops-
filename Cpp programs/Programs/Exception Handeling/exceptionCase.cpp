    //Exception handling is a mechanism that separates code that detects and handles exceptional circumstances from the rest of your program.
    #include<iostream>
    #include<stdexcept>
    using namespace std;
    int main(){
        double bal = 1000.0;
        try
        {
            //DEPOSIT
        double amt;
            cout<<"Enter Deposit amount = ";
            cin>>amt;
            if (amt<= 0){
                throw invalid_argument("Invalid Deposit Amount");
            } 
            bal = bal + amt;
            cout<<"Avaliable Amount = "<<bal<<endl;


        //WITHDRWAN
            cout<<"Enter Withdrawl amount = ";
            cin>>amt;
            if (amt<= 0){
                throw invalid_argument("Invalid Withdrawl Amount");
            } 
            if(amt > bal){
                throw runtime_error("Insufficient Withdrawl FUND");
            }
            bal = bal - amt;
            cout<<"Avaliable Amount = "<<bal<<endl;
        }
        catch(exception& e){
            cout<<e.what();
        }
}