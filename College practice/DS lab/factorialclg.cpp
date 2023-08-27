/*Write a program to perform the following tasks:
1. Find the factorial of a given number
2. Check the input entered by the user
3. Print the least significant digit of the output
4. Repeat the program until user do not want to exit.*/
#include<iostream>
using namespace std;
int main(){
    int n, facotrial = 1;
    char run = 'Y';
    while (run == 'Y'|| run == 'y'){    //Repeat the program until user do not want to exit
        cout<<"Enter the number = ";
        cin>>n;
    if(n>0){                                   //Check the input entered by the user
        for(int i=1 ; i<=n ; i++){             //Find the factorial of a given number
            facotrial = facotrial*i;       
        }
        cout<<"Factorial of number "<<n<<" is = "<<facotrial<<endl;
    // Print the least significant digit of the output
    int leastSignificantDigit = facotrial % 10;
    cout<<"Least significant digit of the factorial = "<<leastSignificantDigit<<endl;
    }else{
        cout<<"Factorial of this number can't be found"<<endl;
    }
    cout<<"\nDo you want to continue \nPress Y - Yes \nPress N - No "<<endl;
    cin>>run;
    }
    return 0;
}