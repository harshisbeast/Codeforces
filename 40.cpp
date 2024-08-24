#include<iostream>
using namespace std;
int main()
{
  int n ;
  cin>> n ; 
  while( n--)
  {
    int num, k;
    cin>> num ;
   int ans=0;
    cin>> k;
  int arr[k];
  if( num%k==0)
  {
ans= (num/k)+1;
  }
  else{
    ans=2*(num/k);
  }
  cout<<ans<<endl;
  }
}