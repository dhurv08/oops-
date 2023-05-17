//To print Rectangular Pattern
    #include <iostream>
using namespace std;
int main()
{
    int i,j,x,y;
    cout<<"Enter the number of rows:"<<endl;
    cin>>x;
    cout<<"Enter the number of coloums :"<<endl;
    cin>>y;


    for(i=1;i<=x;i++){
        for (j=1;j<=y;j++){
            cout <<"*"<<"\t";
        }
        cout <<"\n";
    }
    return 0;
}