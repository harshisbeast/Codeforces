#include<iostream>
using namespace std;
int main()
{
  int n ;
  cin>>n;
  while( n--)
  {
    int a, b , c , d;
    cin>>a>>b>>c>>d;
    int count=0;
    if( a<c<b || b<c<a)
    {
      count++;
    }
    if( a<d<b || b<d<a)
    {
      count++;
    }
    if( count==0 || count==2)
    {
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }

  }

}