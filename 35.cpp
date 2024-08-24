#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
  int k;
  cin>>k;
  while(k--)
  {
    int n;
    cin>>n;
    int maxi=0;
    for( int i=2; i< n; i++)
    {
      //  har element pe traverse kar rha hai '
      int k=n/i;
      int sum=0;
      int t=1;
      while(k)
      {
  sum= sum+ i*t;
  t++;

        k--;
      }
       maxi=max(sum , maxi);
    }
   
cout<<maxi<<endl;
  }

}