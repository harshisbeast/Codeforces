#include<iostream>
using namespace std;
int main()
{
  //  pehla line mei 3 space hai dure mei 2 3rd mei 4th 0
  for( int i=0; i<4; i++)
  {
    for( int j=i+1;j<4; j++)
    {
    cout<<" ";
  }
  }
  // space ho gya hai 
  for( int i=1 ;i<= 4; i++)
  {
    
     for( int j=0; j< 2*i-1 ; j++)
     {
      char ch='A';
      int half= i;
      if( j>half)
      {
        cout<< ch-j;
      }
      else{
        cout<<ch+j;
      }


     }
     cout<<endl;
  }
}
