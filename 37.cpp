#include<iostream>
using namespace std;
int main()
{
  int n;
  while( n--)
{
  int a , b , c;
  cin>> a>> b >> c;
  int turn =5;
  while( turn--)
  {
    if( a<b)
    {
      a++;
    }
    else if( a==b)
    {
      b++;
    }
    else if( b==c)
    {
      c++;
    }

  }
  int prod= a*b*c;
  cout<<prod<<endl;
}
}