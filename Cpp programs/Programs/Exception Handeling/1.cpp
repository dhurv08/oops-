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
                
                cout<<"Invalid Deposit Amount"<<endl;
            } 
            bal = bal + amt;
            cout<<"Avaliable Amount = "<<bal<<endl;


        //WITHDRWAN
            cout<<"Enter Withdrawl amount = ";
            cin>>amt;
            if (amt<= 0){
                cout<<"Invalid Withdrawl Amount"<<endl;
            } 
            if(amt > bal){
                cout<<"Insufficient Withdrawl FUND"<<endl;
            }
            bal = bal - amt;
            cout<<"Avaliable Amount = "<<bal<<endl;
        }
        catch(exception e){
            cout<<e.what();
        }
}