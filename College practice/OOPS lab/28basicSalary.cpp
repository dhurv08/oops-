#include<iostream>
using namespace std;
class Salary {
private:
    float salary;
    string employeeName;

    float calDa() {
        float da = 0.5 * salary;
        return da; // Return the calculated DA
    }

    float calHra() {
        float hra = 0.5 * salary;
        return hra; // Return the calculated HRA
    }

public:
    void read() {
        cout << "Enter the Salary = ";
        cin >> salary;
        cout << "Enter Employee Name = ";
        cin >> employeeName;
    }

    void showSalary() {
        float grocSalary;

        float da = calDa();
        float hra = calHra();

        grocSalary = salary + da + hra;
        cout << "The gross salary is = " << grocSalary << endl;
    }
};
int main() {
    Salary obj;
    obj.read();
    obj.showSalary();

    return 0;
}
