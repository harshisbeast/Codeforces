#include<iostream>
using namespace std;
int main()
{
  int nc;
  cin>> nc;
  while( nc--)
  {
    int movex, movey;
    cin>> movex>> movey;
int ans=0;
    int startk, endk;
    int startq, endq;
    cin>>startk>>endk;
    cin>>startq>>endq;
    for( int i= startk; i< endk;i++)
    {
      for( int j= startq;j < endq;j++)
      {
        if( i+ movex== endk && j+ movey== endq)
        {
          ans++;
        }
      }
    }
    cout<<ans<<endl;

  }
}