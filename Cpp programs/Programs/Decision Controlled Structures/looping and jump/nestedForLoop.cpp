#include<iostream>
using namespace std;
int main(){
    //To print 1 2 3 4 in four rows and four coloums

    // int i,j;

  //   for(i=0 ; i<4 ; i++){
  //  for(j=0 ; j<4 ; j++){
  //   cout<<(j+1)<<"\t";
  //  }cout<<"\n";
  //   }



  //To print 1 1 1 1 , 2 2 2 2 , 3 3 3 3 and 4 4 4 4 in different rows

  int i,j;

  for (i = 1; i <= 4; i++) {
    for (j = 1; j <= 4; j++) {
      cout << i <<"\t"; 
   }
  cout <<"\n";
  } 

  return 0;  
}