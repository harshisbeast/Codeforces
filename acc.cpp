#include<vector>
#include<iostream>
using namespace std;
int main()
{
  int arr[6]={8, 10, 6, 2, 9 , 7};
  int brr[6];
  int maxi=-1;
  for( int i=5; i>=0; i--)
  {
    
    if( arr[i]>maxi)
    {
      maxi= arr[i];
   
    }
       brr[i]= maxi;
  }
  int ans=0;
  for( int i=0 ;i< 6 ; i++)
  {
    if( arr[i]== brr[i])
    {
      ans++;
    }
  }
  cout<<ans;
}