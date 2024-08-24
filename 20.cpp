#include<iostream>
using namespace std;
int main()
{
  int n; cin>>n;
  while( n)
{
  int no;
  cin>>no;
  int result=0;
  int maxi=0;
  for( int i=1 ;i< no; i++)
{
  for( int j=1; j<=i; j++)
  {
    if( no%j==0 && i%j==0)
    {
      ans= j+i;
      if( ans>=maxi)
      {
        result=i;
      }
    }
  }
}

  cout<<result<<endl;
  
    n--;
}

}
