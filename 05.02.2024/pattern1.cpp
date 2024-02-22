#include<iostream>
using namespace std;
int main()
{
    int l = 5;

    for (int i=0;i<=l;i++){
       for (int j=0;j<=i;j++)
       {
        cout<<"*";
       }
       cout<<endl;
}
for(int i=l-1;i>=1;i--)
{
    for(int j=1;j<=i;j++)
    {
      cout<<"*"; 
    }
    cout<<endl;
}
return 0;
}