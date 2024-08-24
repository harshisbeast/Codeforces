#include<iostream>
using namespace std;
int main()
{
  int nofcase;
  cin>>nofcase;
  while( nofcase)
  {
    int n;
    cin>>n;
    int val;
    if( n%2==0)
    {
      val= n/2;
    }
    else{
      val= (n/2)+1;
    }
    int one , two;
    cin>>one>>two;
    int amount=0;
    int left= n%2;
    if( 2*one>two)
    {
      //  2 lene se faida 
      amount= amount+ two*(val-left) +one*left;

    }
    else{
      amount=amount+one*n; 
    }
    cout<<amount<<endl;
    nofcase--;
  }
}