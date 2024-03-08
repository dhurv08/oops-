#include<iostream>
using namespace std;
struct Students{
    string name;
    int rollNo;
    int cLangMarks;
    int cppLangMarks;
    int javaLangMarks;
};
int main(){
    int n;
    cout<<"Enter the number of students = ";
    cin>>n;
    struct Students s[n];   
    float highestC = 0 , highestCpp = 0 , highestJava = 0 ; 

    for(int i = 1 ; i<=n ; i++){
        cout<<"Enter the NAME of Student "<<i<<" = ";
        cin>>s[i].name;
        cout<<"Enter the Roll Number of Student "<<i<<" = ";
        cin>>s[i].rollNo;       
        cout<<"Enter the C language marks of Student "<<i<<" = ";
        cin>>s[i].cLangMarks;
        cout<<"Enter the C++ language marks of Student "<<i<<" = ";
        cin>>s[i].cppLangMarks;
        cout<<"Enter the Java language marks of Student "<<i<<" = ";
        cin>>s[i].javaLangMarks;

        if(highestC < s[i].cLangMarks ){
            highestC = s[i].cLangMarks;
        }
        if(highestCpp < s[i].cppLangMarks ){
            highestCpp = s[i].cppLangMarks;
        }
        if(highestJava < s[i].javaLangMarks ){
            highestJava = s[i].javaLangMarks;
        }

    }
    cout<<"Highest marks in C = "<<highestC<<endl;
    cout<<"Highest marks in Cpp = "<<highestCpp<<endl;
    cout<<"Highest marks in Java = "<<highestJava<<endl;


    return 0;
}