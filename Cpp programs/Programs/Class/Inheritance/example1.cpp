#include<iostream>
using namespace std;
class Person{
    private:
    string name;
    string id;
    string address;
    string email;

    public:
    void setdetailsPerson(string n, string i , string a , string e){
        name = n;
        id=i;
        address = a;
        email = e;
    }

     void printDetailsPerson(){
        cout<<"Name = "<<name<<" , ID = "<<id<<" , Address = "<<address<<" , Email = "<<email;
    }
};

class Student : public Person{
    private:
    string  course;
    string roll_number;

    public:
    void setStudentDetails(string c , string r){
        course = c;
        roll_number = r;
    }

    void printStudent(){
        cout<<" , Course = "<<course<<" , Roll Number = "<<roll_number<<endl;
    }
};

class Teacher : public Person{
    private :
    string qualification;
    string salary;

    public: 
    void setTeacherDetails(string q , string s){
        qualification = q;
        salary = s;
    }

    void printTeacher(){
        cout<<" , Qualification = "<<qualification<<" , Salary = "<<salary<<endl;
    }

};

int main(){
    Student s1;
    Teacher t1;

    s1.setdetailsPerson("abc" , "123" , "iubc" , "dkumra4@gmail.com");
    s1.setStudentDetails("B.tech" , "716");
    s1.printDetailsPerson();
    s1.printStudent();

    t1.setdetailsPerson("xyz" , "1102" , " fEUFBE " , "@gmail.com");
    t1.setTeacherDetails("P.hd" , "500000");
    t1.printDetailsPerson();
    t1.printTeacher();
    

    return 0;
}