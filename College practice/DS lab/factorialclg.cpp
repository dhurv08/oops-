#include<iostream>
using namespace std;
int main(){
    int n, facotrial = 1;
    char run = 'Y';
    while (run == 'Y'|| run == 'y')
    {
        cout<<"Enter the number = "<<endl;
        cin>>n;
    
    if(n>0){
        for(int i=1 ; i<=n ; i++){
            facotrial = facotrial*i;
        }
        cout<<"Factorial of number "<<n<<" is = "<<facotrial<<endl;
    }else{
        cout<<"Factorial of this number can't be found"<<endl;
    }
    
    cout<<"\nDo you want to continue \nPress Y - Yes \nPress N - No "<<endl;
    cin>>run;
    }

    return 0;
}