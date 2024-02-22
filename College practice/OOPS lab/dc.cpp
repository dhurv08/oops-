#include<iostream>
using namespace std;

class account {
private:
    int acc_no;
    string acc_name;

public:
    void read();
    void display();
};

void account::read() {
    cout<<"Enter the account number: ";
    cin>>acc_no;
    cout<<"Enter the account name: ";
    cin>>acc_name;
}

void account::display() {
    cout<<"Account Number: "<<acc_no << endl;
    cout<<"Account Name: "<<acc_name << endl;
}

int main() {
    account obj[1]; // Creating an array of 1 account object

    // Access the first element of the array (obj[0])
    obj[0].read();
    obj[0].display();

    return 0;
}
