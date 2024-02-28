//WAP to input two arrays of the same length and print common elements between them.
#include<iostream>
using namespace std;
int main(){
    int a[100] , b[100] , n; 
    cout<<"Enter the number of elements for both array 1&2 = ";
    cin>>n;
    cout<<"Enter "<<n<<" elements for array 1 = ";
    for(int i = 0 ; i <n ; i++){
        cin>>a[i];
    }
    cout<<"Enter "<<n<<" elements for array 2 = ";
    for(int i = 0 ; i <n ; i++){
        cin>>b[i];
    }

    //comparing
    cout<<"Common Numbers between two arrays = ";
    for(int i = 0 ; i<n ; i++){
        for (int j = 0 ; j<n ; j++){
            if(a[i] == b [j]){
                cout<<a[i]<<"\t";
            }
        }
    }

    return 0;
}